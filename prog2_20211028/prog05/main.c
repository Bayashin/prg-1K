//
//  main.c
//  prog05
//
//  Created by k21099kk on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n=5;
    int a[]={10,20,30,40,50};
    int *p=a;
    
    for (int i=0; i<n; i++) {
        printf("%d ",*(p+i));
    }
    printf("\n");
    
    for (int j=0; j<n; j++) {
        *(p+j) +=1;
        printf("%d ",*(p+j));
    }
    printf("\n");
    
    return 0;
}
