//
//  main.c
//  prog07
//
//  Created by k21099kk on 2021/12/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
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

double dist (Iris i1, Iris i2) {
    double dis=pow((i1.sepal_length-i2.sepal_length),2)
                +pow((i1.sepal_width-i2.sepal_width),2)
                +pow((i1.petal_length-i2.petal_length),2)
                +pow((i1.petal_width-i2.petal_width),2);
    return dis;
}

Iris get1NN (Iris iris, Iris array[], int num){
    double minDist=10000;
    int minIndex=-1;
    for(int i=0; i<num; i++){
        double d=dist(iris, array[i]);
        if (minDist>d) {
            minDist=d;
            minIndex=i;
        }
    }
    return array[minIndex];
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
    
    int correctNum=0;
    for (int i=0; i<size/5; i++) {
        Iris iris = array_test[i];
        //一番近いやつを探す
        Iris nniris= get1NN(iris, array_learn, size*4/5);
        //一番近いやつと同じ種類とみなす
        printf("実際の種類:%s  推定された種類:%s\n",iris.class,nniris.class);
        
        if (strcmp(iris.class,nniris.class)==0) {
            correctNum++;
        }
    }
    
    printf("正解率:%f％\n",correctNum/30.0*100);

    return 0;
}


    
   

