//
//  main.c
//  prog3
//
//  Created by k21099kk on 2021/12/22.
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
        List *n=p;
        free(p);
        return n;
    }
    return root;
}



int main(int argc, const char * argv[]) {
    List *root=NULL;
    List l1={10,root};
    root=&l1;
    List l2={7,root};
    root=&l2;
    List l3={4,root};
    root=&l3;
    
    print_list(&(*root));
    int n; printf("number?   "); scanf("%d",&n); printf("\n");
    root=add_list(&(*root), n);
    print_list(&(*root));
    
    return 0;
}
