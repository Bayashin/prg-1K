//
//  main.c
//  13_05_sin
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
   
    double angle;
    
    printf("角度は\? "); scanf("%lf",&angle);
    
    double radian;
        radian = angle /180.0 * M_PI;

    printf("sin (%f) = %f\n",angle,sin(radian));
    
    return 0;
}
