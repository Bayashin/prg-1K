//
//  10_04_arrayswap.c
//  prg1
//
//  Created by k21099kk on 2021/06/17.
//

#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},tmp,x,y,i;
    
    printf("何番目を入れ替えますか\?(1~5) ");scanf("%d %d",&x,&y);printf("\n");
    
    if (1<=x && x<=5 && 1<=y && y<=5) {
        tmp = a[x-1]; a[x-1] = a[y-1]; a[y-1] = tmp;
    
        for (i=0; i<5; i++) {
            printf("a[%d] = %d\n",i,a[i]);
        }
    } else {
        printf("正しくありません\n");
    }
    return 0;
}
