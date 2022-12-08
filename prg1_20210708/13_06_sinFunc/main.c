//
//  main.c
//  13_06_sinFunc
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>
#include <math.h>

double deg2Rad (double theta){
    double radian;
    radian = theta /180.0 * M_PI;
    return radian;
}
   

    int main(int argc, const char * argv[]) {
   
    double angle;
    
    printf("角度は\? "); scanf("%lf",&angle);
    
    printf("sin (%f) = %f\n",angle, sin(deg2Rad(angle)));
        
        return 0;
}
