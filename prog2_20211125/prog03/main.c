//
//  main.c
//  prog03
//
//  Created by k21099kk on 2021/11/25.
//

#include <stdio.h>

typedef struct iris{
    double sepal_length;
    double sepal_width;
    double petal_length;
    double petal_width;
    char class[20];
}Iris;

void printIris(Iris iris){
    printf("%.1f, %.1f, %.1f, %.1f, %s\n",iris.sepal_length,iris.sepal_width,iris.petal_length,iris.petal_width,iris.class);
}

int main(int argc, const char * argv[]) {
    
    Iris iris1={6.7,3.0,5.2,2.3,"Iris-virginica"};
    Iris iris2={7.0,3.2,4.7,1.4,"Iris-versicolor"};
    
    printIris(iris1); printIris(iris2);
    
    return 0;
}
