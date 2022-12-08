//
//  main.c
//  exercise01
//
//  Created by k21099kk on 2021/10/28.
//

#include <stdio.h>
#include <stdlib.h>

void swap(int *pnum1,int *pnum2){
    int tmp;
    tmp = *pnum1;
    *pnum1 = *pnum2;
    *pnum2 = tmp;
}

void sort(int *pnum1,int *pnum2){
    int tmp1=*pnum1, tmp2=*pnum2;
    if (tmp1 > tmp2) {
        swap(&tmp1, &tmp2);
        *pnum1=tmp1; *pnum2=tmp2;
    }
}

void bubble(int *p,int size){
    for (int i=0; i<size; i++) {
        for (int j=0; j<size-i-1; j++) {
            sort(&*(p+j),&*(p+j+1));
        }
    }
}

int main(int argc, const char * argv[]) {
    int a[]={4,2,-6,-9,6467,3,8,-32,6,-8,22,86,-88,24,652,100554,-4,-3,1,73,136,-6753,1224,-36,-942,75};
    int size = sizeof(a)/sizeof(int);
    
    for (int i=0; i<size; i++) printf("%d ",a[i]);
    printf("\n");
    
    bubble(a, size);
    
    for (int i=0; i<size; i++) printf("%d ",a[i]);
    printf("\n");
    
    return 0;
}
