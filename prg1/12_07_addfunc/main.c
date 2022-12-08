//
//  main.c
//  12_07_addfunc
//
//  Created by k21099kk on 2021/07/01.
//

#include <stdio.h>

int addof(int x, int y){
    return  x+y;
}

int main(int argc, const char * argv[]) {
    int a,b;
    
    printf("a b\? "); scanf("%d %d",&a,&b);
    
    printf("和は %dです。\n",addof(a, b));
    
    return 0;
}
