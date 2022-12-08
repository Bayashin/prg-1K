//
//  main.c
//  prog08
//
//  Created by k21099kk on 2021/10/28.
//

#include <stdio.h>

void TenTimes(int *p,int size){
    for (int i=0; i<size; i++) *(p+i) *=10;
}

int main(int argc, const char * argv[]) {
    int a[]={10,20,30,40,50};
    int b[]={3,4,5,6};
    
    int sizeA = sizeof(a)/sizeof(int);
    int sizeB = sizeof(b)/sizeof(int);
    
    for (int i=0; i<sizeA; i++) printf("%d ",a[i]);
    printf(", ");
    for (int i=0; i<sizeB; i++) printf("%d ",b[i]);
    printf("\n");
    
    TenTimes(a,sizeA); TenTimes(b,sizeB);
    
    for (int j=0; j<sizeA; j++) printf("%d ",a[j]);
    printf(", ");
    for (int j=0; j<sizeB; j++) printf("%d ",b[j]);
    printf("\n");
    
    return 0;
}

