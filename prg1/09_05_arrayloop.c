//
//  09_05_arrayloop.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
int main()
{
    int a[100],i;
    
    for(i=0;i<100;i++){
        a[i]=i;
    }
    
    for(i=0;i<100;i++){
        printf("a[%d] :%d\n",i,a[i]);
    }
    return 0;
}
