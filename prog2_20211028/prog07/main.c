//
//  main.c
//  prog07
//
//  Created by k21099kk on 2021/10/28.
//

#include <stdio.h>

int na=5,nb=4;

void TenTimes(int *p,int size){
    for (int i=0; i<size; i++) *(p+i) *=10;
}

int main(int argc, const char * argv[]) {
    int a[]={10,20,30,40,50};
    int b[]={3,4,5,6};
    
    for (int i=0; i<na; i++) printf("%d ",a[i]);
    printf(", ");
    for (int i=0; i<nb; i++) printf("%d ",b[i]);
    printf("\n");
    
    TenTimes(a,na); TenTimes(b,nb);
    
    for (int j=0; j<na; j++) printf("%d ",a[j]);
    printf(", ");
    for (int j=0; j<nb; j++) printf("%d ",b[j]);
    printf("\n");
    
    return 0;
}
