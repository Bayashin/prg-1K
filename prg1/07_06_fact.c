//
//  07_06_fact.c
//  prg1
//
//  Created by k21099kk on 2021/05/27.
//

#include <stdio.h>
int main(){
    int x,n,i,y;
    
    printf("x n\n");scanf("%d %d",&x,&n);
    y=x;
    
    if(n>0){
        for(i=1;i<n;i++) y=y*x;
        printf("%d^%d=%d\n",x,n,y);
        
    }
    
    if(n==0) printf("%d^0=1\n",x);
    
    if(n<0){
        for(i=1;i<(-1*n);i++) y=y*x;
        printf("%d^%d=1/%d\n",x,n,y);
    }
    
    return 0;
}
