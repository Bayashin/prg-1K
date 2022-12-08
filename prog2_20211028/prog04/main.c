//
//  main.c
//  prog04
//
//  Created by k21099kk on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n =5;
    int a[n];
    int *pa = a;
    for (int i=0; i<n; i++) {
        printf("%p\n",pa+i);
    }
    printf("\n");
    for (int j=0; j<n; j++) {
        printf("%p\n",&a[j]);
    }
    return 0;
}
