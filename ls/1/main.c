//
//  main.c
//  1
//
//  Created by k21099kk on 2022/02/07.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024
#define SIZE 48

typedef struct pcr{
    char day[20];
    int candidate;
}Pcr;

typedef struct corona2{
    char prefecture[20];
    int infected;
}Corona2;

typedef struct corona{
    char day[20];
    Corona2 corona[SIZE];
} Corona;

void swap(Corona2 *pnum1,Corona2 *pnum2){
    int tmp = (*pnum1).infected;
    (*pnum1).infected = (*pnum2).infected;
    (*pnum2).infected = tmp;
    char ctemp[20];
    strcpy(ctemp, (*pnum1).prefecture);
    strcpy((*pnum1).prefecture, (*pnum2).prefecture);
    strcpy((*pnum2).prefecture, ctemp);
}

void sort(Corona2 *value,Corona2 *value2){
    if ((*value).infected < (*value2).infected) {
        swap(&(*value),&(*value2));
    }
}

void lntrim(char *str) {
  char *p;
  p = strchr(str, '\r');
  if(p != NULL) {
    *p = '\0';
  }
}

void Initialize(char line[],char line2[],Corona *pre){
    char *value = strtok(line,",\n");
    strcpy((*pre).day, value);
    for(int i=0; i<48; i++){
        value = strtok(NULL,",\n");
        (*pre).corona[i].infected = atoi(value);
    }
    char *value2=strtok(line2,",\n");
    char ch[20];
    strcpy(ch, value2);
    for(int i=0; i<SIZE; i++){
        value2 = strtok(NULL,",\n");
        strcpy((*pre).corona[i].prefecture, value2);
    }
}

void Initialize_pcr(char line[],Pcr *num){
    char *value = strtok(line,",\n");
        strcpy((*num).day,value);
        value = strtok(NULL,",\n");
        (*num).candidate=atoi(value);
}

void mkfile(Corona *data,FILE *ofp){
    for (int i=0; i<SIZE; i++) lntrim((*data).corona[i].prefecture);
    fprintf(ofp,"%s",(*data).day );
    for (int i=0; i<SIZE; i++) fprintf(ofp,",%s",(*data).corona[i].prefecture );
    fprintf(ofp,"\n");
    for (int i=0; i<SIZE; i++) fprintf(ofp,",%d",(*data).corona[i].infected );
    fprintf(ofp,"\n");
}


void getOverThousand(Corona *array,Corona *data,int num,FILE *ofp){
    for (int i=0; i<num-1; i++) {
        *data=array[i];
        if ((*data).corona[0].infected>=1000) {
            for (int j=0; j<SIZE-1; j++) {
                for (int k=j+1; k<SIZE-1; k++) {
                    sort(&(*data).corona[j+1], &(*data).corona[k+1]);
                }
            }
            mkfile(&(*data),&(*ofp));
        }
    }
}

int main(int argc, const char * argv[]){
    Corona infected,array[MAX];
    int num=0;

    FILE *fp,*ofp;

    char line[MAX],line2[MAX];
    fp=fopen("newly_confirmed_cases_daily.csv", "r");
    if(fp==NULL){
        printf("Cannot open the file\n.");
        exit(0);
    }
    
    while (fgets(line, MAX, fp)) {
        if (num<1) {
            strcpy(line2, line);
            num++;
        }else{
            char li[MAX];
            strcpy(li, line2);
            Initialize(line, li, &infected);
            array[num-1]=infected;
            num++;
        }
    }
    
    fclose(fp);

    int num_p=0;
    Pcr pcr,arrayC[MAX];
    fp=fopen("pcr_tested_daily.csv", "r");
    if(fp==NULL){
        printf("Cannot open the file\n.");
        exit(0);
    }
    while (fgets(line, MAX, fp)) {
        if (num_p<1){
            num_p++;
        }else{
            Initialize_pcr(line, &pcr);
            arrayC[num_p-1]=pcr;
            num_p++;
        }
    }

fclose(fp);

    
    ofp=fopen("infected_over_1000.csv", "w");
    if(fp==NULL){
        printf("Cannot open the file\n.");
        exit(0);
    }
    Corona data_corona;
    getOverThousand(array,&data_corona,num,&(*ofp));
    fclose(ofp);
    
    ofp=fopen("infectedPercentage.csv", "w");
    if(fp==NULL){
        printf("Cannot open the file\n.");
        exit(0);
    }
    for (int i=0; i<num_p; i++) {
        for (int j=0; j<num; j++) {
            if (strcmp(arrayC[i].day, array[j].day)==0) {
                double ratio=(array[j].corona[0].infected*1.0)/(arrayC[i].candidate*1.0);
                fprintf(ofp, "%s,%f,%d,%d\n",arrayC[i].day,ratio,array[j].corona[0].infected,arrayC[i].candidate);
                break;
            }
        }
    }
    fclose(ofp);
    
    return 0;
}
