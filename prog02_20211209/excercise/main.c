//
//  main.c
//  excercise
//
//  Created by k21099kk on 2021/12/09.
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

int cmpAceLatitude(const void * n1, const void *n2) {
    if (((Earthquake *)n1)->latitude > ((Earthquake *)n2)->latitude)
        {
            return 1;
        }
        else if (((Earthquake *)n1)->latitude < ((Earthquake *)n2)->latitude)
        {
            return -1;
        }
        else
        {
            return 0;
        }
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
    
    qsort(array, num, sizeof(Earthquake), cmpAceLatitude);
    
    int latitude[46];
    for (int i=0; i<46; i++) {
        latitude[i]=0;
    }
    
    for (int i=0; i<num; i++) {
        for (int j=0,k=0; j<45; j++,k+=2) {
            if (k<=array[i].latitude && array[i].latitude<k+2) {
                latitude[j]++; break;
            }
        }
    }
    
    for (int i=0,j=0; i<45; i++) {
        printf("北緯%d°~北緯%d°:%d回\n",j,j+2,latitude[i]);
        j+=2;
    }
    
    return 0;
}

