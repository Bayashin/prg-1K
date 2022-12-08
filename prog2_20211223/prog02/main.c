//
//  main.c
//  prog2
//
//  Created by k21099kk on 2021/12/22.
//

#include <stdio.h>

typedef struct list{
    int num;
    struct list *next;
}List;

void print_list(List *root) {
    while (root != NULL) {
        printf("%d\n",(*root).num);
        root = (*root).next;
    }
    //if(root==NULL) return;
    //printf("%d\n",root->num);
    //print_list(&(*root));
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
    
    return 0;
    
}
