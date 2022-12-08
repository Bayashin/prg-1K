//
//  main.c
//  prog06
//
//  Created by k21099kk on 2021/12/23.
//

#include <stdio.h>
#include <stdlib.h>

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
        prev->next=current->next
        ;
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

int main(int argc, const char * argv[]) {
    List *root=NULL;
    int t,n;
    printf("How many times?  "); scanf("%d",&t);
    for (int i=0; i<t; i++) {
        printf("number?  "); scanf("%d",&n);
        root=add_list(&(*root), n);
    }
    printf("\n");
    print_list(&(*root));
    
    printf("delete number  "); scanf("%d",&n);
    root=delete_list(&(*root), n);
    
    print_list(&(*root));
    root=free_list(&(*root));
    
    
    return 0;
}
