//
//  07_01_swap.c
//  prg1
//
//  Created by k21099kk on 2021/05/26.
//

#include <stdio.h>
int main()
{
    int x,y,tmp;
    
    printf("x\? y\?\n");scanf("%d %d",&x,&y);
    
    tmp=x,x=y,y=tmp;
    
    printf("%d %d\n",x,y);
    
    return 0;
    
}
