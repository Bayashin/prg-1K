//
//  main.c
//  14_10_arrayinput
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int size =5;
    double height[size],sum =0;
    int i=0;
    
    for (; i< size; i++) {
        printf("%d人目の身長は\? ",i+1); scanf("%lf",&height[i]);
        sum += height[i];
    }
    
    double average = sum / size ;
    printf("平均身長= %f\n",average);
    
    return 0;
}
