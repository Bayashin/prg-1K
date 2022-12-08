//
//  main.c
//  14_01_average
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int size = 3;
    int height[size];
    int sum =0;
    
    for (i=0; i<size; i++) {
        printf("%d人目の身長は\? ",i+1); scanf("%d",&height[i]);
        sum += height[i];
    }
    
    
    double average;
    average = sum * 1.0 / size;
    printf("平均身長は %f です\n",average);
    
    return 0;
}
