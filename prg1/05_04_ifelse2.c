//
//  05_04_ifelse2.c
//  prg1
//
//  Created by k21099kk on 2021/05/13.
//

#include <stdio.h>
int main ()
{
    int a,b;
    
    printf("a\?\n");scanf("%d",&a);
    printf("b\?\n");scanf("%d",&b);
    
    if(a>=b)
    {
        printf("aはb以上です\n");
    }else{
        printf("aはb未満です\n");
    }
    return 0;
}
