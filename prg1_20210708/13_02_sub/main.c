//
//  main.c
//  13_02_sub
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>

int subof(int x, int y){
    return x-y;
}

int main(int argc, const char * argv[]) {
    int a=5,b=10;
    
    printf("%d-%d=%d\n",a,b,subof(a, b));

    return 0;
}
