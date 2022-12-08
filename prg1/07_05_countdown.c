//
//  07_05_countdown.c
//  prg1
//
//  Created by k21099kk on 2021/05/27.
//

#include <stdio.h>
int main()
{
    int n,i;
    printf("n\?\n");scanf("%d",&n);
    
    if(n>0){
        for(i=n;i>=1;i--){
        printf("%d\n",i);
        }
    }
    if(n<=0){
        for(i=n;i<=1;i++){
        printf("%d\n",i);
        }
    }
    return 0;
}
