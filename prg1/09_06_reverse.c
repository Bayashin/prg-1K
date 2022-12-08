//
//  09_06_reverse.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
int main()
{
    int a[5],i;
    
    for(i=0;i<5;i++){
        printf("input %d: ",i);scanf("%d",&a[i]);
    }
    
    for(i=4;i>=0;i--){
        printf("%d: %d\n",i,a[i]);
    }
    return 0;
}
