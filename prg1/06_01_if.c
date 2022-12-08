//
//  06_01_if.c
//  prg1
//
//  Created by k21099kk on 2021/05/20.
//

#include <stdio.h>
int main()
{
    int a;
    
    printf("a\?\n");scanf("%d",&a);
    
    if(a>0){
        printf("aは正の値です\n");
    }else if(a==0){
        printf("aは0です\n");
    }else {
        printf("aは負の値です\n");
    }
    return 0;
}
