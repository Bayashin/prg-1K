//
//  main.c
//  prog07
//
//  Created by k21099kk on 2021/12/02.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 256
#define DAY 365

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

int main(int argc, const char * argv[]) {
    
    int num=0;
    Earthquake eq,array[11000];
    
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
    
    int count[DAY];
    for (int i=0; i<DAY; i++) {
        count[i]=0;
    }
    Earthquake prevEq={2010,12,31,0.0,0.0,'0'};
    int index=-1;
    
    for (int i=0; i<num; i++) {
        if (prevEq.manth!=array[i].manth || prevEq.day!=array[i].day) {
            index++;
        }
        count[index]++;
        prevEq=array[i];
    }
    
    double average=num/DAY;
    double square_sum=0;
    for (int i=0; i<DAY; i++) {
        count[i]=pow(count[i], 2);
        square_sum += count[i];
    }
    double standard_deviation=sqrt(square_sum/DAY-pow(average, 2));
    
    printf("1日平均:%f回　標準偏差:%f\n",average,standard_deviation);
    
    return 0;
}
