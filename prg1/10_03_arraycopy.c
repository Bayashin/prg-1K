//
//  10_03_arraycopy.c
//  prg1
//
//  Created by k21099kk on 2021/06/17.
//

#include <stdio.h>
int main()
{
    int heightC[5],i;
    double HeightM[5];
    
    for (i=0; i<5; i++) {
        printf("%d人目の身長(cm)は\? ",i+1);scanf("%d",&heightC[i]);
    }
    printf("\n");
    
    for (i=0; i<5; i++) {
        HeightM[i] = heightC[i] / 100.0;
    }
    
    for (i=0; i<5; i++) {
        printf("%d人目の身長は %f mです\n",i+1,HeightM[i]);
    }
    
    return 0;
}
