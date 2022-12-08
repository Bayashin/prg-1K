//
//  10_07_arraycomplex.c
//  prg1
//
//  Created by k21099kk on 2021/06/17.
//

#include <stdio.h>
int main()
{
    int height[5],weight[5],i;
    double BMI[5],Sweight,diff;

    for(i=0; i<5; i++) {
        printf("%d人目の身長,体重は\? ",i+1);scanf("%d %d",&height[i],&weight[i]);
    }
    printf("\n");
    
    for (i=0; i<5; i++) {
        BMI[i] = weight[i] / (height[i]*0.01 * height[i]*0.01);
    }
    
    for (i=0; i<5; i++) {
        if (BMI[i]>23) {
            Sweight = (height[i] -100)*0.9;
            diff = weight[i] - Sweight;
            printf("%d人目のBMI %f はしきい値を超えています\n",i+1,BMI[i]);
            printf("標準体重との差は %f です\n",diff);
        }
    }
    
    return 0;
}
