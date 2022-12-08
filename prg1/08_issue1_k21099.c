//
//  08_issue1_k21099.c
//  prg1
//
//  Created by k21099kk on 2021/06/09.
//

#include <stdio.h>

int main()
{
    int x,temoti,zandaka;
    temoti=1000,zandaka=1000;
    
    while(temoti>0 && zandaka>0){
        printf("x\? ");scanf("%d",&x);
        if(x==0){
            printf("取引終了\n");
            break;
        }
        zandaka=zandaka-x;
        temoti=temoti+x;
        printf("銀行: %d 財布: %d\n",zandaka,temoti);printf("\n");
    }
    return 0;
}
