//
//  07_09_ways.c
//  prg1
//
//  Created by k21099kk on 2021/05/27.
//

#include <stdio.h>
int main()
{
    int n,x,i,j,k,count;
    
    printf("n x\?\n");scanf("%d %d",&n,&x);
    
    count=0;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            for(k=1;k<=n;k++){
                if(i+j+k==x){
                    count++;
                    printf("%d+%d+%d=%d\n",i,j,k,x);
                }
            }
        }
    }
    
    printf("組み合わせの数は%d個です\n",count);
    
    return 0;
}
