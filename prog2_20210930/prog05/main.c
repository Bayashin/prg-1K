//
//  main.c
//  prog05
//
//  Created by k21099kk on 2021/09/30.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for (int i=0; i<100; i++) {
        printf("hoge");
        if ((i+1)%2==0) {
            printf("foo");
        }
        if ((i+1)%3==0) {
            printf("bar");
        }
        printf("\n");
    }
    
    return 0;
}
