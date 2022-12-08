//
//  07_04_countup.c
//  prg1
//
//  Created by k21099kk on 2021/05/27.
//

#include <stdio.h>
int main()
{
    int n,i;
    printf("n\?\n");scanf("%d",&n);
    
    if(n>=1){
        for(i=1;i<=n;i++){
        printf("%d\n",i);
        }
    }
    if(n<1){
        for(i=1;i>=n;i--){
        printf("%d\n",i);
        }
    }
    
    return 0;
}
