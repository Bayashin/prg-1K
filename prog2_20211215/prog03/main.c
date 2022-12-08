//
//  main.c
//  prog03
//
//  Created by k21099kk on 2021/12/16.
//

#include <stdio.h>

int x (int n) {
    if (n==1 || n==2) {
        return 1;
    }else{
        return x(n-1)+x(n-2);
    }
}

int main(int argc, const char * argv[]) {
    
    int result;
    
    for (int i=1; i<=10; i++) {
        result = x(i);
        printf("x(%d)=%d\n",i,result);
    }
    
    
    return 0;
}
