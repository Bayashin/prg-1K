//
//  05_07_ifand.c
//  prg1
//
//  Created by k21099kk on 2021/05/13.
//

#include <stdio.h>
int main()
{
    int a,b;
    
    printf("a\?\n");scanf("%d",&a);
    printf("b\?\n");scanf("%d",&b);

    if(a>0&&b>0){
            printf("aとbは正です\n");
        }else {
            printf("aとbのどちらかは負もしくは0です\n");
    }
    
    return 0;
}
