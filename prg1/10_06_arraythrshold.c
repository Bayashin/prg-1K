//
//  10_06_arraythrshold.c
//  prg1
//
//  Created by k21099kk on 2021/06/17.
//

#include <stdio.h>
int main()
{
    int height[5],i;

    for(i=0; i<5; i++) {
        printf("%d人目の身長は\? ",i+1);scanf("%d",&height[i]);
    }
    printf("\n");
    
    for (i=0; i<5; i++) {
        if (height[i]>170) {
            printf("%d人目の身長 %d はしきい値を超えています\n",i+1,height[i]);
        }
    }
    
    return 0;
}
