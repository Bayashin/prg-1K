//
//  main.c
//  exercise
//
//  Created by k21099kk on 2022/01/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 256

typedef struct melem{
    char name[20];
    double height;
    double weight;
    struct melem *next;
}Melem;


void copy_file(const char *file1, const char *file2){
    char line[MAX];
    FILE *fpr,*fpw;
    fpr=fopen(file1, "r");
    fpw=fopen(file2, "w");
    if(fpr==NULL||fpw==NULL){
        printf("Canot open the file. :1\n");
        exit(0);
    }
    while (fgets(line, MAX, fpr)!=NULL) {
        fputs(line, fpw);
    }
    fclose(fpr); fclose(fpw);
}


void print_mlist(Melem *root) {
    if(root==NULL) return;
    printf("%s %.1f %.1f\n",root->name,root->height,root->weight);
    print_mlist(root->next);
}


Melem* add_melem(Melem *root, char name[20], double height, double weight){
    Melem *p=(struct melem*)malloc(sizeof(struct melem));
    if ((p=(struct melem*)malloc(sizeof(struct melem))) == NULL) {
        printf("No enough memory.\n");
    }else {
        strcpy(p->name, name);
        p->height=height;
        p->weight=weight;
        p->next=root;
        Melem *current=root;
        Melem *prev=NULL;
        int n=0;
        //どこに挿入すればいい？
        if (root==NULL) {//まだ空だったら
            p->next=root;
            return p;
        }else{
            while (current!=NULL) {
                n=strcmp(current->name, name);
                if (n>=0) { //同じ、または辞書的にnameの方が先だったら
                    break;
                }
                prev=current;
                current=current->next;
            }
        }
        if (n==0) { //同じ名前の時
            Melem *mel=current->next;
            p->next=mel;//currentと入れ替え
            free(current);
        }else p->next=current; //挿入はcurrentの前に入れればいい
        
        //prevに対する処理
        if (prev==NULL) {
            //新しく作った要素が先頭にならないといけない
            root=p;
        }else{
            prev->next=p;
        }
        return root;
    }
    return root;
}


Melem* delete_melem(Melem *root,char delname[20]) {
    //たどっていって
    Melem *current=root;
    Melem *prev=NULL;
    while (current!=NULL) {
        //消したいやつを見つける
       int n=strcmp(current->name, delname);
        if (n==0) {
            break;
        }
        prev=current;
        current=current->next;
    }
    if(current==NULL) return root;
    if (prev==NULL) {
        root=current->next;
    }else{
        prev->next=current->next;
    }
    free(current);
    return root;
}


Melem* free_mlist (Melem *root){
    if (root==NULL) return NULL;
    else if(root->next != NULL) {
        free_mlist(root->next);  free(root);
    }
    return NULL;
}


void update_list(const char *file,Melem *root){
    FILE *ofp;
    ofp=fopen(file, "w");
    if(ofp==NULL){
        printf("Canot open the file. :3\n");
        exit(0);
    }
    while (root != NULL) {
        fprintf(ofp,"%s,%.1f,%.1f\n",root->name, root->height, root->weight);
        root = (*root).next;
    }
    fclose(ofp);
}



int main(int argc, const char * argv[]) {
    char name[20]; double height,weight;
    Melem *root=NULL;
    
    const char *file1="meibo.csv", *file2="meibo_backup.csv";
    copy_file(file1, file2);
    
    char line[MAX];
    FILE *fp;
    fp=fopen(file1, "r");
    if(fp==NULL){
        printf("Canot open the file. :2\n");
        exit(0);
    }
    while (fgets(line,MAX,fp)!=NULL) {
        char *value = strtok(line,",\n");
        strcpy(name, value);
        value=strtok(NULL, ",\n");
        height=atof(value);
        value=strtok(NULL, ",\n");
        weight=atof(value);
        root=add_melem(&(*root),name,height,weight);
    }
    fclose(fp);
    
    print_mlist(&(*root));
    
    char character=' ';
    while (character != 'q') {
        printf("What to do? "); scanf("%s",&character);
        switch (character) {
            case 'a':
                printf("name(lowercase letters) height weight  "); scanf("%s %lf %lf",name,&height,&weight); printf("\n");
                root=add_melem(&(*root),name,height,weight);
                break;
            case 'b':
                printf("delete name  "); scanf("%s",name);
                root=delete_melem(&(*root), name);
                break;
            case 'p':
                print_mlist(&(*root));
                break;
            case 'q':
                break;
        }
    }
    update_list(file1, &(*root));
    root=free_mlist(&(*root));
    
    return 0;
}
