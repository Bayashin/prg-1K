//
//  10_05_arrayminmax.c
//  prg1
//
//  Created by k21099kk on 2021/06/17.
//

#include <stdio.h>
int main()
{
    int height[5],i,min,max;
    
    for (i=0; i<5; i++) {
        printf("%d人目の身長は\? ",i+1);scanf("%d",&height[i]);
    }
    printf("\n");
    
    min = height[0]; max = height[0];
    
    for (i=1; i<5; i++) {
        if (min>height[i]) {
            min = height[i];
        }
        if (max<height[i]) {
            max = height[i];
        }
    }
    
    printf("最小身長は %d です\n",min);
    printf("最大身長は %d です\n",max);
    
    return 0;
}
