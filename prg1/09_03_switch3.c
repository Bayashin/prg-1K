//
//  09_03_switch3.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    int n;
    
    printf("x\? ");scanf("%lf",&x);printf("\n");
    
    printf("--- menu ---\n");
    printf("1:絶対値, 2:二乗, 3:三乗\n");printf("\n");
    printf("menu No.\? ");scanf("%d",&n);
    
    switch(n){
        case 1:
            printf("|%f|=%f\n",x,fabs(x));
            break;
        case 2:
            printf("%f^2=%f\n",x,pow(x,2));
            break;
        case 3:
            printf("%f^3=%f\n",x,pow(x,3));
            break;
    }
    
    return 0;
}
