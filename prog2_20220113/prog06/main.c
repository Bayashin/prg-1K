//
//  main.c
//  prog06
//
//  Created by k21099kk on 2022/01/13.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct melem{
    char name[20];
    double height;
    double weight;
    struct melem *next;
}Melem;

void print_mlist(Melem *root) {
    if(root==NULL) return;
    printf("%s %.1f %.1f\n",root->name,root->height,root->weight);
    print_mlist(root->next);
}

void lowerstring(char *out, const char *in){
    int i;
    
    i = 0;
    while(in[i] != '\0'){
        out[i] = tolower(in[i]);
        i++;
    }
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
        //どこに挿入すればいい？
        if (root==NULL) {//まだ空だったら
            p->next=root;
            return p;
        }else{
            while (current!=NULL) {
                char conv_name[20],conv_name2[20];
                lowerstring(conv_name,current->name);
                lowerstring(conv_name2, name);
                if (strcmp(conv_name, conv_name2)>=0) { //同じ、または辞書的にnameの方が先だったら
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


Melem* free_mlist (Melem *root){
    if (root==NULL) return NULL;
    else if(root->next != NULL) {
        free_mlist(root->next);  free(root);
    }
    
    return NULL;
}


int main(int argc, const char * argv[]) {
    Melem *root=NULL;

    int n; char name[20]; double height,weight;
    printf("How many times? "); scanf("%d",&n);
    for (int i=0; i<n; i++) {
        printf("name height weight  "); scanf("%s %lf %lf",name,&height,&weight); printf("\n");
        root=add_melem(&(*root),name,height,weight);
    }
    print_mlist(&(*root));
    
    root=free_mlist(&(*root));
    
    return 0;
}
