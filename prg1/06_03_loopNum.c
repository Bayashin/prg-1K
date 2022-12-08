//
//  06_03_loopNum.c
//  prg1
//
//  Created by k21099kk on 2021/05/20.
//

#include <stdio.h>
int main()
{
    int i,n;
    
    printf("何回繰り返す\?\n");scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("Hello World\n");
    }
    return 0;
}
