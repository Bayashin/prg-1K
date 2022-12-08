//
//  main.c
//  prog08
//
//  Created by k21099kk on 2021/12/01.
//

#include <stdio.h>
#include <stdlib.h>
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

int main(int argc, const char * argv[]) {
    
    Iris array[150],iris;
    int num=0;
    
    FILE *fp;
    char line[MAX];
    fp=fopen("view.php", "r");
    if(fp==NULL){
        printf("Canot open the file\n.");
        exit(0);
    }
    
    while (fgets(line, MAX, fp) != NULL) {
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
        
        array[num]=iris;
        num++;
    }
    
    fclose(fp);
    
    Iris setosa={0,0,0,0,"Iris-setosa"};
    int sum_setosa=0;
    Iris versicolor={0,0,0,0,"Iris-versicolor"};
    int sum_versicolor=0;
    Iris virginica={0,0,0,0,"Iris-virginica"};
    int sum_virginica=0;
    char irisset[]="Iris-setosa",irisver[]="Iris-versicolor",irisvir[]="Iris-virginica";
    
    for (int i=0; i<150; i++) {
        iris=array[i];
        if (strcmp(iris.class,irisset)==0) {
            setosa.sepal_length += iris.sepal_length;
            setosa.sepal_width += iris.sepal_width;
            setosa.petal_length += iris.petal_length;
            setosa.petal_width += iris.petal_width;
            sum_setosa++;
        }

        if (strcmp(iris.class,irisver)==0) {
            versicolor.sepal_length += iris.sepal_length;
            versicolor.sepal_width += iris.sepal_width;
            versicolor.petal_length += iris.petal_length;
            versicolor.petal_width += iris.petal_width;
            sum_versicolor++;
        }
        
        if (strcmp(iris.class,irisvir )==0) {
            virginica.sepal_length += iris.sepal_length;
            virginica.sepal_width += iris.sepal_width;
            virginica.petal_length += iris.petal_length;
            virginica.petal_width += iris.petal_width;
            sum_virginica++;
        }
    }
    
    setosa.sepal_length = setosa.sepal_length/sum_setosa;
    setosa.sepal_width = setosa.sepal_width/sum_setosa;
    setosa.petal_length = setosa.petal_length/sum_setosa;
    setosa.petal_width = setosa.petal_width/sum_setosa;
    
    versicolor.sepal_length = versicolor.sepal_length/sum_versicolor;
    versicolor.sepal_width = versicolor.sepal_width/sum_versicolor;
    versicolor.petal_length = versicolor.petal_length/sum_versicolor;
    versicolor.petal_width = versicolor.petal_width/sum_versicolor;
            
    virginica.sepal_length = virginica.sepal_length/sum_virginica;
    virginica.sepal_width = virginica.sepal_width/sum_virginica;
    virginica.petal_length = virginica.petal_length/sum_virginica;
    virginica.petal_width = virginica.petal_width/sum_virginica;
    
    Iris sample_iris1={5.7,4.0,1.2,0.2};
    Iris sample_iris2={5.9,2.9,4.2,1.5};
    Iris sample_iris3={5.6,2.8,4.8,2.0};
    
    double distance1_setosa = sqrt(pow(sample_iris1.sepal_length-setosa.sepal_length, 2)+pow(sample_iris1.sepal_width-setosa.sepal_width, 2)+pow(sample_iris1.petal_length-setosa.petal_length, 2)+pow(sample_iris1.petal_width-setosa.petal_width, 2));
    double distance1_versicolor = sqrt(pow(sample_iris1.sepal_length-versicolor.petal_length, 2)+pow(sample_iris1.sepal_width-versicolor.sepal_width, 2)+pow(sample_iris1.petal_length-versicolor.petal_length, 2)+pow(sample_iris1.petal_width-versicolor.petal_width, 2));
    double distance1_virginica = sqrt(pow(sample_iris1.sepal_length-virginica.sepal_length, 2)+pow(sample_iris1.sepal_width-virginica.sepal_width, 2)+pow(sample_iris1.petal_length-virginica.petal_length, 2)+pow(sample_iris1.petal_width-virginica.petal_width, 2));
    if (distance1_setosa>distance1_virginica && distance1_setosa>distance1_versicolor) {
        strcpy(sample_iris1.class,"Iris-setosa" );
    }else if (distance1_versicolor>distance1_setosa && distance1_versicolor>distance1_virginica) {
        strcpy(sample_iris1.class,"Iris-versicolor" );
    }else{
        strcpy(sample_iris1.class,"Iris-virginica" );
    }
    
    double distance2_setosa = sqrt(pow(sample_iris2.sepal_length-setosa.sepal_length, 2)+pow(sample_iris2.sepal_width-setosa.sepal_width, 2)+pow(sample_iris2.petal_length-setosa.petal_length, 2)+pow(sample_iris2.petal_width-setosa.petal_width, 2));
    double distance2_versicolor = sqrt(pow(sample_iris2.sepal_length-versicolor.petal_length, 2)+pow(sample_iris2.sepal_width-versicolor.sepal_width, 2)+pow(sample_iris2.petal_length-versicolor.petal_length, 2)+pow(sample_iris2.petal_width-versicolor.petal_width, 2));
    double distance2_virginica = sqrt(pow(sample_iris2.sepal_length-virginica.sepal_length, 2)+pow(sample_iris2.sepal_width-virginica.sepal_width, 2)+pow(sample_iris2.petal_length-virginica.petal_length, 2)+pow(sample_iris2.petal_width-virginica.petal_width, 2));
    if (distance2_setosa>distance2_virginica && distance2_setosa>distance2_versicolor) {
        strcpy(sample_iris2.class,"Iris-setosa" );
    }else if (distance2_versicolor>distance2_setosa && distance2_versicolor>distance2_virginica) {
        strcpy(sample_iris2.class,"Iris-versicolor" );
    }else{
        strcpy(sample_iris2.class,"Iris-virginica" );
    }
    
    double distance3_setosa = sqrt(pow(sample_iris3.sepal_length-setosa.sepal_length, 2)+pow(sample_iris3.sepal_width-setosa.sepal_width, 2)+pow(sample_iris3.petal_length-setosa.petal_length, 2)+pow(sample_iris3.petal_width-setosa.petal_width, 2));
    double distance3_versicolor = sqrt(pow(sample_iris3.sepal_length-versicolor.petal_length, 2)+pow(sample_iris3.sepal_width-versicolor.sepal_width, 2)+pow(sample_iris3.petal_length-versicolor.petal_length, 2)+pow(sample_iris3.petal_width-versicolor.petal_width, 2));
    double distance3_virginica = sqrt(pow(sample_iris3.sepal_length-virginica.sepal_length, 2)+pow(sample_iris3.sepal_width-virginica.sepal_width, 2)+pow(sample_iris3.petal_length-virginica.petal_length, 2)+pow(sample_iris3.petal_width-virginica.petal_width, 2));
    if (distance3_setosa>distance3_virginica && distance3_setosa>distance3_versicolor) {
        strcpy(sample_iris3.class,"Iris-setosa" );
    }else if (distance3_versicolor>distance3_setosa && distance3_versicolor>distance3_virginica) {
        strcpy(sample_iris3.class,"Iris-versicolor" );
    }else{
        strcpy(sample_iris3.class,"Iris-versicolor" );
    }
    
    
    printf("%s\n",sample_iris1.class); printf("%s\n",sample_iris2.class); printf("%s\n",sample_iris3.class);
    
    return 0;
}

