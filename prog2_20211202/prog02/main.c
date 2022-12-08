//
//  main.c
//  prog02
//
//  Created by k21099kk on 2021/12/02.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct earthquake{
    int year;
    int manth;
    int day;
    double latitude;
    double longitude;
    char intensity;
}Earthquake;

void InitializeEQ(char line[],Earthquake *eq){
    char *value = strtok(line,",\n");
        (*eq).year =atoi(value);
        
        value = strtok(NULL,",\n");
        (*eq).manth = atoi(value);
        
        value = strtok(NULL,",\n");
        (*eq).day = atoi(value);
        
        value = strtok(NULL, ",\n");
        (*eq).latitude = atof(value);
        
        value = strtok(NULL, ",\n");
        (*eq).longitude = atof(value);
        
        value = strtok(NULL, ",\n");
        (*eq).intensity = value[0];
}

void printEQ(Earthquake *eq){
    printf("%d-%d-%d-%f-%f-%c\n",(*eq).year,(*eq).manth,(*eq).day,(*eq).latitude,(*eq).longitude,(*eq).intensity);
}

int main(int argc, const char * argv[]) {
    
    char line[]="2011,3,11,36.553667,137.690500,2";
    
    Earthquake eq;
    
    InitializeEQ(line, &eq);
    
    printEQ(&eq);
    
    return 0;
}
