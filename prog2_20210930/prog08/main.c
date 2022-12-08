//
//  main.c
//  prog08
//
//  Created by k21099kk on 2021/09/30.
//

#include <stdio.h>
#define NUM 100
#define num 0
#define numA 2
#define numB 3


int main(int argc, const char * argv[]) {
    
    for (int i=1; i<=NUM; i++) {
        printf("hoge");
        if (i%numA==num) {
            printf("foo");
        }
        if (i%numB==num) {
            printf("bar");
        }
        printf("\n");
    }
    
    return 0;
}
