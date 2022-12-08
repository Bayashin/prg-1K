//
//  main.c
//  14_06_caleWhile
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    
    printf("n\? "); scanf("%d",&n);
    
    int sum = 0,i=0;
    while (i<=n) {
        sum += i;
        i++;
    }
    
    printf("1から%dまでの和は%dです。\n",n,sum);
    
    return 0;
}
