//
//  05_03_ifelse1.c
//  prg1
//
//  Created by k21099kk on 2021/05/13.
//

#include <stdio.h>
int main()
{
    int a;
    
    printf("a\?\n");scanf("%d",&a);
    
    if(a>=0)
    {
        printf("aは正もしくは0です\n");
    } else {
        printf("aは負の値です\n");
    }
    
    printf("計算終了\n");
    return 0;
}
