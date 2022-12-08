//
//  10_02_arrayinput.c
//  prg1
//
//  Created by k21099kk on 2021/06/17.
//

#include <stdio.h>
int main()
{
    int height[5],i,sum;
    double ave;
    
    for (i=0; i<5; i++) {
        printf("%d人目の身長は\? ",i+1);scanf("%d",&height[i]);
    }
    printf("\n");
    
    for (i=0; i<5; i++) {
        sum += height[i];
    }
    
    ave = sum / 5.0;
    printf("平均身長= %f\n",ave);
    
    return 0;
}
