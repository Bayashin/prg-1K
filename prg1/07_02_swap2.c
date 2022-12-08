//
//  07_02_swap2.c
//  prg1
//
//  Created by k21099kk on 2021/05/26.
//

#include <stdio.h>
int main()
{
    int x,y,tmp;
    
    printf("2つの整数を入力\n");scanf("%d %d",&x,&y);
    
    if(x>y){
        tmp=x,x=y,y=tmp;
    }
    
    printf("%d,%d\n",x,y);
    
    return 0;
}
