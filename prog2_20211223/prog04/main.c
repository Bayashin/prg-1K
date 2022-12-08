//
//  main.c
//  prog04
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
        return p;
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
    int t,n;
    printf("How many times?  "); scanf("%d",&t);
    for (int i=0; i<t; i++) {
        printf("number?  "); scanf("%d",&n);
        root=add_list(&(*root), n);
    }
    printf("\n");
    print_list(&(*root));
    root=free_list(&(*root));
    
    return 0;
}
