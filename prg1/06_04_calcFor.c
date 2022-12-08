//
//  06_04_calcFor.c
//  prg1
//
//  Created by k21099kk on 2021/05/20.
//

#include <stdio.h>
int main()
{
    int i,sum;
    
    sum=0;
    
    for(i=1;i<=10;i++){
        sum=sum+i;
    }
    
    printf("sum=%d\n",sum);
    
    return 0;
}
