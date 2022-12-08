//
//  main.c
//  test
//
//  Created by k21099kk on 2021/12/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

typedef struct list{
    int num;
    struct list *next;
}List;

void print_list(List *root) {
    if(root==NULL) return;
    printf("%d\n",root->num);
    print_list(root->next);
}

List* add_list(List *root, int num) {
    List *p=(struct list*)malloc(sizeof(struct list));
    if ((p=(struct list*)malloc(sizeof(struct list))) == NULL) {
        printf("No enough memory.\n");
    }else {
        p->num=num;
        p->next=root;
        List *current=root;
        List *prev=NULL;
        //どこに挿入すればいい？
        if (root==NULL) {//まだ空だったら
            p->next=root;
            return p;
        }else{
            while (current!=NULL) {
                if (num<=current->num) {
                    //currentの前にデータを入れる
                    break;
                     
                }
                prev=current;
                current=current->next;
            }
        }
        //挿入はcurrentの前に入れればいい
        p->next=current;
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

List* delete_list(List *root,int delnum) {
    //たどっていって
    List *current=root;
    List *prev=NULL;
    while (current!=NULL) {
        //消したいやつを見つける
        if (current->num==delnum) {
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

List* free_list (List *root){
    if (root==NULL) return NULL;
    else if(root->next != NULL) {
        free_list(root->next);  free(root);
    }
    
    return NULL;
}

void operation_list (List *root) {
    char character=' ';
    int num=0;
    while (character != 'q') {
        printf("What to do? "); scanf("%s",&character);
        switch (character) {
            case 'a':
                printf("Number? "); scanf("%d",&num); printf("\n");
                root=add_list(&(*root), num);
                break;
            case 'b':
                printf("Number? "); scanf("%d",&num); printf("\n");
                root=delete_list(&(*root), num);
                break;
            case 'p':
                print_list(&(*root));
                break;
            case 'q':
                break;
        }
    }
}

int main(int argc, const char * argv[]) {
    List *root=NULL;
    char line[MAX];

    FILE *fp,*ofp;
    fp=fopen("numlist.txt", "r");
    if(fp==NULL){
        printf("Canot open the file\n.");
        exit(0);
    }
    while (fgets(line,MAX,fp)) {
        int num=atoi(line);
        root=add_list(&(*root), num);
    }
    
    fclose(fp);
    
    print_list(&(*root));
    
    operation_list(&(*root));
    
    ofp=fopen("numlist.txt", "w");
    if(fp==NULL){
        printf("Canot open the file\n.");
        exit(0);
    }
    while (root != NULL) {
        fprintf(ofp,"%d\n",root->num );
        root = (*root).next;
    }
    fclose(ofp);
    
    root=free_list(&(*root));
    
    return 0;
}

