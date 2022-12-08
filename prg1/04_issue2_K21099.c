//
//  04_issue2_K21099.c
//  prg1
//
//  Created by k21099kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc,const char * argv[])
{
    int x;
    printf("x\?\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("偶数です\n");
    }
    if(x%2!=0)
    {
        printf("奇数です\n");
    }
    return 0;
}
