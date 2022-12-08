//
//  main.c
//  prog02
//
//  Created by k21099kk on 2021/12/15.
//

#include <stdio.h>

int x (int n) {
    if (n==1) {
        return 1;
    }else {
        return x(n-1)+2;
    }
}


int main(int argc, const char * argv[]) {
    
    int n=x(10);
    
    printf("x(10)=%d\n",n);

    return 0;
}

