//
//  main.c
//  14_13_linearfunc
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int f(int x){
    return 2*x+1;
}

int main(int argc, const char * argv[]) {
    int i=0,size =4;
    
    for (; i<= size; i++) {
        printf("f(%d)=%d\n",i,f(i));
    }
    
    return 0;
}
