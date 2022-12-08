//
//  08_05_tillzero.c
//  prg1
//
//  Created by k21099kk on 2021/06/03.
//

#include <stdio.h>
int main()
{
    int x,zandaka;
    zandaka=1000;
    
    while(zandaka>0){
        printf("x\? ");scanf("%d",&x);
        zandaka=zandaka-x;
        printf("残高:%d\n",zandaka);printf("\n");
    }
    return 0;
}
