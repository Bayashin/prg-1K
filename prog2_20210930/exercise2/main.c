//
//  main.c
//  exercise2
//
//  Created by k21099kk on 2021/10/04.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double sine,θ;
    
    for (int i=0; i<=36; i++) {
        θ=i/18.0*M_PI;
        sine=sin(θ);
        printf("%d°,%f\n",i*10,sine);
    }
    return 0;
}
