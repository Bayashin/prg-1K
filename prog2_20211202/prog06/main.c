//
//  main.c
//  prog06
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
    
    int count[9];
    for (int i=0; i<9; i++) count[i]=0;
    
    for (int i=0; i<num; i++) {
        switch (array[i].intensity) {
            case '1':
                count[0]++;
                break;
            case '2':
                count[1]++;
                break;
            case '3':
                count[2]++;
                break;
            case '4':
                count[3]++;
                break;
            case '7':
                count[4]++;
                break;
            case 'A':
                count[5]++;
                break;
            case 'B':
                count[6]++;
                break;
            case 'C':
                count[7]++;
                break;
            case 'D':
                count[8]++;
                break;
        }
    }
    
    for (int i=0; i<4; i++) printf("??????%d:%d???\n",i+1,count[i]);
    printf("??????7:%d???\n",count[4]); printf("??????A:%d???\n",count[5]); printf("??????B:%d???\n",count[6]); printf("??????C:%d???\n",count[7]); printf("??????D:%d???\n",count[8]);
    
    return 0;
}
