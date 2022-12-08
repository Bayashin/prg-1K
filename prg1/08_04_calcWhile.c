//
//  08_04_calcWhile.c
//  prg1
//
//  Created by k21099kk on 2021/06/03.
//

#include <stdio.h>
int main()
{
    int x,sum;
    
    x=1,sum=0;
    
    while(x!=0){
        printf("x\? ");scanf("%d",&x);
        sum=sum+x;
        printf("sum:%d\n",sum);
    }
    
    printf("end\n");
    
    return 0;
}
