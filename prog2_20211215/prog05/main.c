//
//  main.c
//  prog05
//
//  Created by k21099kk on 2021/12/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 256

typedef struct iris{
    double sepal_length;
    double sepal_width;
    double petal_length;
    double petal_width;
    char class[20];
}Iris;

void readiris(char line[], Iris *iris){
    char *value = strtok(line,",\n");
    (*iris).sepal_length=atof(value);
    
    value=strtok(NULL, ",\n");
    (*iris).sepal_width=atof(value);
    
    value=strtok(NULL, ",\n");
    (*iris).petal_length=atof(value);
    
    value=strtok(NULL, ",\n");
    (*iris).petal_width=atof(value);

    value=strtok(NULL, ",\n");
    strcpy((*iris).class, value);
}

int getrand (int i) {
   //0~iまでの整数値をランダムに決めて返す
    srand((unsigned int)time(NULL));
    return rand()%i + rand()%2;
}

void swap(Iris *a,int i,int j){
    //a[i]とa[j]の入れ替え
    Iris tmp=*(a+i);
    *(a+i) = *(a+j);
    *(a+j) = tmp;
}

void printIris(Iris iris){
    printf("%.1f, %.1f, %.1f, %.1f, %s\n",iris.sepal_length,iris.sepal_width,iris.petal_length,iris.petal_width,iris.class);
}


int main(int argc, const char * argv[]) {
    
    Iris array_all[150],iris;
    int num=0;
    
    FILE *fp;
    char line[MAX];
    fp=fopen("view.php", "r");
    if(fp==NULL){
        printf("Canot open the file\n.");
        exit(0);
    }
    
    while (fgets(line, MAX, fp) != NULL) {
        readiris(line, &iris);
        array_all[num]=iris;
        num++;
    }
    
    fclose(fp);
    
    int size = sizeof(array_all)/sizeof(Iris);
    
    for (int  i=size-1; i>0; i--) {  //配列の並べ替え
        int j = getrand(i);
        swap(&array_all[0], i, j);
    }
    
    
    Iris array_learn[size*4/5],array_test[size/5];
    num=0;
    for (int i=0; i<size*4/5; i++) {  //4/5を array_learn に入れる
        array_learn[i]=array_all[i];
        num++;
    }
    for (int i=0; i<size/5; i++) {   //1/5を array_test に入れる
        array_test[i]=array_all[i+num];
    }
    
    printf("array_learn\n");
    for (int i=0; i<num; i++) printIris(array_learn[i]);
    printf("array_test\n");
    for (int i=0; i<size/5; i++) printIris(array_test[i]);
    
    return 0;
}
