//
//  05_issue1_K21099.c
//  prg1
//
//  Created by k21099kk on 2021/05/13.
//

#include <stdio.h>
int main ()
{
    int x;
    
    printf("x\?\n");  scanf("%d",&x);
    
    if(x%2==0){
        if(x%3==0){
            printf("2の倍数です\n");printf("3の倍数です\n");
        }else{
            printf("2の倍数です\n");printf("3の倍数ではありません\n");
    }
    }else if(x%3==0){
        printf("2の倍数ではありません\n");printf("3の倍数です\n");
    }else{
        printf("2の倍数ではありません\n");printf("3の倍数ではありません\n");
}
    return 0;
}
