//
//  main.c
//  13_issue1_k21099
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>
#include <math.h>

double area(double x){
    double area;
    area = x * x * M_PI;
    return area;
}

double circumference(double y){
    double circumference;
    circumference = y *2* M_PI;
    return circumference;
}

int main(int argc, const char * argv[]) {
    double r;
    
    printf("半径 r: "); scanf("%lf",&r);
    printf("%f  %f\n",area(r),circumference(r));
}
