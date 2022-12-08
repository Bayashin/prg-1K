//
//  main.c
//  prog02
//
//  Created by k21099kk on 2022/01/12.
//

#include <stdio.h>

typedef struct melem{
    char name[20];
    double height;
    double weight;
    struct melem *next;
}Melem;

void print_melem(Melem *root) {
    if(root==NULL) return;
    printf("%s %.1f %.1f\n",root->name,root->height,root->weight);  
    print_melem(root->next);
}

int main(int argc, const char * argv[]) {
    Melem *root=NULL;
    Melem l1={"Hayashi",175.2,60.5,root};
    root=&l1;
    Melem l2={"Katou",179.1,75.9,root};
    root=&l2;
    Melem l3={"Tanaka",159.4,52.6,root};
    root=&l3;
    
    print_melem(&(*root));
    
    return 0;
    
}
