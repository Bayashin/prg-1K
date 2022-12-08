//
//  main.c
//  12_05_comoare
//
//  Created by k21099kk on 2021/07/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,max;
    
    printf("a b\? "); scanf("%d %d",&a,&b);
    
    if (a>b) {
        max = a;
    } else {
        max = b;
    }
    printf("大きい方の値は %dです。\n",max);
    
    return 0;
}
