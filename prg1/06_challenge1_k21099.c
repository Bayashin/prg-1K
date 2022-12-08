//
//  06_challeng1_k21099.c
//  prg1
//
//  Created by k21099kk on 2021/05/20.
//

#include <stdio.h>
int main()
{
    int x,i,n;
    
    printf("x\?\n");scanf("%d",&x);
    
    n=1;
    
    if(x==1){
        printf("1は素数ではありません\n");
    }else{
    for(i=2;n!=0;i++){
        n=x%i;
    }
        
    if(i>=x){
           printf("%dは素数です\n",x);
       }else{
           printf("%dは素数ではありません\n",x);
       }
    }
       return 0;
   }

   
        
   
