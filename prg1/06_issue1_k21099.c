//
//  06_issue1_k21099.c
//  prg1
//
//  Created by k21099kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i,n,h,sum;
    double average;
    
    sum=0;
    
    printf("人数は\?\n");scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        
        printf("%d人目の身長は\?\n",i);scanf("%d",&h);
        sum+=h;
    }
   
    average=sum/(n*1.00);
    printf("平均身長は%fです\n",average);
    return 0;
}
