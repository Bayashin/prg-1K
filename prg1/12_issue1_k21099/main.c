//
//  main.c
//  12_issue1_k21099
//
//  Created by k21099kk on 2021/07/01.
//

#include <stdio.h>

int factfunc(int x)
{
    int fact;
    for (fact =1; x>0; x--) fact *= x;
    
    return  fact;
}

int main(int argc, const char * argv[]) {
    int n;
    
    printf("n\? "); scanf("%d",&n);
    
    printf("%dの階乗は %dです。\n",n,factfunc(n));
    
    return 0;
}
