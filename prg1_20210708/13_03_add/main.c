//
//  main.c
//  13_03_add
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>

void addof(int x, int y){
    printf("%d+%d=%d\n",x,y,x+y);
}

int main(int argc, const char * argv[]) {
    int a=5, b=10;
    
    addof(a,b);
    
    return 0;
}
