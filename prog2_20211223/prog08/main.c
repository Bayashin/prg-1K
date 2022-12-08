//
//  main.c
//  prog08
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

List* free_list (List *root){
    if (root==NULL) return NULL;
    else if(root->next != NULL) {
        free_list(root->next);  free(root);
    }
    
    return NULL;
}


int main(int argc, const char * argv[]) {
    List *root=NULL;
    char line[MAX];

    FILE *fp;
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
    root=free_list(&(*root));
    
    return 0;
}
