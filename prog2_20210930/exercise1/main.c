//
//  main.c
//  exercise1
//
//  Created by k21099kk on 2021/10/04.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double r;
    printf("半径？\n");scanf("%lf",&r);
    
    double area,circumference;
    circumference = r*2*M_PI; area = pow(r, 2)*M_PI;
    printf("円周：%f　面積：%f\n",circumference,area);
    
    return 0;
}
