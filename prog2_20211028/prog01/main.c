//
//  main.c
//  prog01
//
//  Created by k21099kk on 2021/10/28.
//

#include <stdio.h>

void dame_swap(int n1,int n2){
    printf("[dame_SWAP] n1:%d, n2:%d\n",n1,n2);
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
        printf("[dame_SWAP] n1:%d, n2:%d\n",n1,n2);
}

void swap(int *pn1,int *pn2){
    printf("[SWAP] n1:%d, n2:%d\n",*pn1,*pn2);
        int tmp = *pn1;
        *pn1 = *pn2;
        *pn2 = tmp;
        printf("[SWAP] n1:%d, n2:%d\n",*pn1,*pn2);
}

int main(int argc, const char * argv[]) {
    int n1=3,n2=10;
    printf("[MAIN] n1:%d, n2:%d\n",n1,n2);
    dame_swap(n1, n2);
    printf("[MAIN] n1:%d, n2:%d\n",n1,n2);
    swap(&n1,&n2);
    printf("[MAIN] n1:%d, n2:%d\n",n1,n2);
    return 0;
}
