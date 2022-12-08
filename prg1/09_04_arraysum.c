//
//  09_04_arraysum.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
int main()
{
    int a[10],sum,i;
    
    for(i=0;i<10;i++){
        a[i]=i+11;
    }
    
    for(i=0;i<10;i++){
        sum+=a[i];
        printf("%d",a[i]);
        if(a[i]!=20){
            printf("+");
        }
    }
    printf("=%d\n",sum);
    
    return 0;
}
