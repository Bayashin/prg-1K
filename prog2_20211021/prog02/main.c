//
//  main.c
//  prog02.c
//
//  Created by k21099kk on 2021/10/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i1=100,i2=200;
    int *pi1=&i1,*pi2=&i2;
    
    printf("before\n");
    printf("%d\n",i1);
    printf("%d\n",i2);
    
    printf("%p\n",&i1);
    printf("%p\n",&i2);
    
    *pi1=1000; *pi2=2000;
    printf("after\n");
    printf("%d\n",i1);
    printf("%d\n",i2);
    return 0;
}
