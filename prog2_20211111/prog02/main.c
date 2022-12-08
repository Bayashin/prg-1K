//
//  main.c
//  prog02
//
//  Created by k21099kk on 2021/11/11.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int r=10;
    
    double area=pow(r, 2)*M_PI;
    double circumference=r*2*M_PI;
    printf("半径:%d、面積:%f、円周:%f\n",r,area,circumference);
    
    return 0;
}
