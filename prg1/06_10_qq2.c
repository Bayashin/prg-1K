//
//  06_10_qq2.c
//  prg1
//
//  Created by k21099kk on 2021/05/20.
//

#include <stdio.h>
int main()
{
    int n,i,x,q;
    
    printf("n\?\n");scanf("%d",&n);
    
    for(i=n;i<=n+2;i++){
        for(x=1;x<=9;x++){
            q=i*x;
            printf("%dx%d=%d\n",i,x,q);
        }
    }
    return 0;
}
