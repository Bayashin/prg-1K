//
//  main.c
//  prog04
//
//  Created by k21099kk on 2022/01/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

Melem* add_melem(Melem *root, char name[20], double height, double weight) {
    Melem *p=(struct melem*)malloc(sizeof(struct melem));
    if ((p=(struct melem*)malloc(sizeof(struct melem))) == NULL) {
        printf("No enough memory.\n");
    }else {
        strcpy(p->name, name);
        p->height=height;
        p->weight=weight;
        p->next=root;
        Melem *n=p;
        free(p);
        return n;
    }
    return root;
}

int main(int argc, const char * argv[]) {
    Melem *root=NULL;
    Melem l1={"Hayashi",175.2,60.5,root};
    root=&l1;
    Melem l2={"Katou",179.1,75.9,root};
    root=&l2;
    Melem l3={"Tanaka",159.4,52.6,root};
    root=&l3;
    
    print_mlist(&(*root));
    char name[20]; double height,weight;
    printf("name height weight  "); scanf("%s %lf %lf",name,&height,&weight); printf("\n");
    root=add_melem(&(*root),name,height,weight);
    print_mlist(&(*root));
    
    return 0;
    
}
