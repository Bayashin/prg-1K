//
//  main.c
//  prog03
//
//  Created by k21099kk on 2021/12/02.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

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
    
    Earthquake eq,array[11000];
    int num=0;
    
    FILE *fp;
    char line[MAX];
    fp=fopen("h2011_eq.csv", "r");
    if(fp==NULL){
        printf("Canot open the file\n.");
        exit(0);
    }
    
    while (fgets(line, MAX, fp)) {
        InitializeEQ(line, &eq);
        array[num]=eq;
        num++;
    }
    
    fclose(fp);
    
    for (int i=0; i<num; i++) {
        printEQ(&array[i]);
    }
    
    return 0;
}
