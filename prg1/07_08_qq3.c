//
//  07_08_qq3.c
//  prg1
//
//  Created by k21099kk on 2021/05/27.
//

#include <stdio.h>
int main()
{
    int i,n;
    
    for(i=1;i<=9;i++){
        for(n=1;n<=9;n++){
            printf("%3d",i*n);
        }printf("\n");
    }
    
    return  0;
}
