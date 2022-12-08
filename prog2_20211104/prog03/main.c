//
//  main.c
//  prog03
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};
    
    int asize = sizeof(a)/sizeof(0);
    int psize =sizeof(p)/sizeof(char*);
    
    for (i=0; i<asize; i++) printf("a[%d] = \"%s\"\n",i,a[i]);
    for (i=0; i<psize; i++) printf("p[%d] = \"%s\"\n",i,p[i]);
    
    return 0;
}
