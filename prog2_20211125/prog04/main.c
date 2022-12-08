//
//  main.c
//  prog04
//
//  Created by k21099kk on 2021/11/25.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    
    char line[]="5.7,2.9,4.2,1.3,Iris-versicolor\n";
    
    Iris iris;
    char *value = strtok(line,",\n");
    iris.sepal_length=atof(value);
    
    value=strtok(NULL, ",\n");
    iris.sepal_width=atof(value);
    
    value=strtok(NULL, ",\n");
    iris.petal_length=atof(value);
    
    value=strtok(NULL, ",\n");
    iris.petal_width=atof(value);
    
    value=strtok(NULL, ",\n");
    strcpy(iris.class, value);
    
    printIris(iris);
    
    return 0;
}
