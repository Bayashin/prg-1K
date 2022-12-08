//
//  main.c
//  12_08_sumfunc
//
//  Created by k21099kk on 2021/07/01.
//

#include <stdio.h>


int sumfunc(int x)
{
    int i,m;
    for (i=1,m=0; i <= x; i++) m +=i;
    return  m;
}

int main(int argc, const char * argv[]) {
    int n;
    
    printf("n\? "); scanf("%d",&n);
    
    printf("1から%dまでの和は %dです。\n",n,sumfunc(n));
    
    return 0;
}
