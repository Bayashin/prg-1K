//
//  06_09_qq1.c
//  prg1
//
//  Created by k21099kk on 2021/05/20.
//

#include <stdio.h>
int main()
{
    int i,n,q;
    for(i=1;i<=9;i++){
        for(n=1;n<=9;n++){
            q=i*n;
            printf("%dx%d=%d\n",i,n,q);
        }
    }
    return 0;
}
