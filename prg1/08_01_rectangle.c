//
//  08_01_rectangle.c
//  prg1
//
//  Created by k21099kk on 2021/06/03.
//

#include <stdio.h>
int main()
{
    int h,w,i,j;
    
    printf("h w\?");scanf("%d %d",&h,&w);printf("\n");
    
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            putchar('#');
        }printf("\n");
    }
    
    return 0;
}
