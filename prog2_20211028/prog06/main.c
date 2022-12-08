//
//  main.c
//  prog06
//
//  Created by k21099kk on 2021/10/28.
//

#include <stdio.h>

int n=5;

void TenTimes(int *p){
    for (int i=0; i<n; i++) {
        *(p+i) *=10;
    }
}

int main(int argc, const char * argv[]) {
    int a[]={10,20,30,40,50};
    
    for (int i=0; i<n; i++) printf("%d ",a[i]);
    printf("\n");
    
    TenTimes(a);
    
    for (int j=0; j<n; j++) printf("%d ",a[j]);
    printf("\n");
    
    return 0;
}
