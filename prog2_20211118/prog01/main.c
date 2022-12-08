//
//  main.c
//  prog01
//
//  Created by k21099kk on 2021/11/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *p;
    p=(int*)malloc(4*sizeof(int));
    p[0]=3;
    p[1]=4;
    p[2]=39;
    p[3]=582;
    for (int i=0; i<4; i++) printf("p[%d]=%d\n",i,p[i]);
    
    free(p);
    
    return 0;
}
