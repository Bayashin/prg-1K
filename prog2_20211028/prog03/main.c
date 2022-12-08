//
//  main.c
//  prog03
//
//  Created by k21099kk on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n =3;
    double a[n];
    printf("%p\n",&a);
    for (int i=0; i<n; i++) {
        printf("%p\n",&a[i]);
    }
    return 0;
}
