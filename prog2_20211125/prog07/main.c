//
//  main.c
//  prog07
//
//  Created by k21099kk on 2021/11/25.
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

void printIris(Iris iris,Iris sd_iris){
    printf("sepal_lengrh(%.1f,%.1f)\n",iris.sepal_length,sd_iris.sepal_length);
    printf("sepal_width(%.1f,%.1f)\n",iris.sepal_width,sd_iris.sepal_width);
    printf("petal_length(%.1f,%.1f)\n",iris.petal_length,sd_iris.petal_length);
    printf("petal_width(%.1f,%.1f)\n",iris.petal_width,sd_iris.petal_width);
}


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
    Iris sq_sd_setosa={0,0,0,0,"Iris_setosa"};
    int sum_setosa=0;
    Iris versicolor={0,0,0,0,"Iris-versicolor"};
    Iris sq_sd_versicolor={0,0,0,0,"Iris-versicolor"};
    int sum_versicolor=0;
    Iris virginica={0,0,0,0,"Iris-virginica"};
    Iris sq_sd_virginica={0,0,0,0,"virginica"};
    int sum_virginica=0;
    char irisset[]="Iris-setosa",irisver[]="Iris-versicolor",irisvir[]="Iris-virginica";
    
    
    for (int i=0; i<150; i++) {
        iris=array[i];
        if (strcmp(iris.class,irisset)==0) {
            setosa.sepal_length += iris.sepal_length;
            sq_sd_setosa.sepal_length += pow(iris.sepal_length, 2);
            setosa.sepal_width += iris.sepal_width;
            sq_sd_setosa.sepal_width += pow(iris.sepal_width, 2);
            setosa.petal_length += iris.petal_length;
            sq_sd_setosa.petal_length += pow(iris.petal_length, 2);
            setosa.petal_width += iris.petal_width;
            sq_sd_setosa.petal_width += pow(iris.petal_width, 2);
            sum_setosa++;
            
        }

        if (strcmp(iris.class,irisver)==0) {
            versicolor.sepal_length += iris.sepal_length;
            sq_sd_versicolor.sepal_length += pow(iris.sepal_length, 2);
            versicolor.sepal_width += iris.sepal_width;
            sq_sd_versicolor.sepal_width += pow(iris.sepal_width, 2);
            versicolor.petal_length += iris.petal_length;
            sq_sd_versicolor.petal_length += pow(iris.petal_length, 2);
            versicolor.petal_width += iris.petal_width;
            sq_sd_versicolor.petal_width += pow(iris.petal_width, 2);
            sum_versicolor++;
        }
        
        if (strcmp(iris.class,irisvir )==0) {
            virginica.sepal_length += iris.sepal_length;
            sq_sd_virginica.sepal_length += pow(iris.sepal_length, 2);
            virginica.sepal_width += iris.sepal_width;
            sq_sd_virginica.sepal_width += pow(iris.sepal_width, 2);
            virginica.petal_length += iris.petal_length;
            sq_sd_virginica.petal_length += pow(iris.petal_length, 2);
            virginica.petal_width += iris.petal_width;
            sq_sd_virginica.petal_width += pow(iris.petal_width, 2);
            sum_virginica++;
        }
    }
    
    setosa.sepal_length = setosa.sepal_length/sum_setosa;
    sq_sd_setosa.sepal_length = sqrt(sq_sd_setosa.sepal_length/sum_setosa-pow(setosa.sepal_length, 2));
    setosa.sepal_width = setosa.sepal_width/sum_setosa;
    sq_sd_setosa.sepal_width = sqrt(sq_sd_setosa.sepal_width/sum_setosa-pow(setosa.sepal_width, 2));
    setosa.petal_length = setosa.petal_length/sum_setosa;
    sq_sd_setosa.petal_length = sqrt(sq_sd_setosa.petal_length/sum_setosa-pow(setosa.petal_length, 2));
    setosa.petal_width = setosa.petal_width/sum_setosa;
    sq_sd_setosa.petal_width = sqrt(sq_sd_setosa.petal_width/sum_setosa-pow(setosa.petal_width, 2));
    
    versicolor.sepal_length = versicolor.sepal_length/sum_versicolor;
    sq_sd_versicolor.sepal_length = sqrt(sq_sd_versicolor.sepal_length/sum_versicolor-pow(versicolor.sepal_length, 2));
    versicolor.sepal_width = versicolor.sepal_width/sum_versicolor;
    sq_sd_versicolor.sepal_width = sqrt(sq_sd_versicolor.sepal_width/sum_versicolor-pow(versicolor.sepal_width, 2));
    versicolor.petal_length = versicolor.petal_length/sum_versicolor;
    sq_sd_versicolor.petal_length = sqrt(sq_sd_versicolor.petal_length/sum_versicolor-pow(versicolor.petal_length, 2));
    versicolor.petal_width = versicolor.petal_width/sum_versicolor;
    sq_sd_versicolor.petal_width = sqrt(sq_sd_versicolor.petal_width/sum_versicolor-pow(versicolor.petal_width, 2));
            
    virginica.sepal_length = virginica.sepal_length/sum_virginica;
    sq_sd_virginica.sepal_length = sqrt(sq_sd_virginica.sepal_length/sum_virginica-pow(virginica.sepal_length, 2));
    virginica.sepal_width = virginica.sepal_width/sum_virginica;
    sq_sd_virginica.sepal_width = sqrt(sq_sd_virginica.sepal_width/sum_virginica-pow(virginica.sepal_width, 2));
    virginica.petal_length = virginica.petal_length/sum_virginica;
    sq_sd_virginica.petal_length = sqrt(sq_sd_virginica.petal_length/sum_virginica-pow(virginica.petal_length, 2));
    virginica.petal_width = virginica.petal_width/sum_virginica;
    sq_sd_virginica.petal_width = sqrt(sq_sd_virginica.petal_width/sum_virginica-pow(virginica.petal_width, 2));
    
    printf("Iris-setosa(avg,sd)\n"); printIris(setosa,sq_sd_setosa); printf("\n");
    printf("Iris-versicolor(avg,sd)\n"); printIris(versicolor,sq_sd_virginica); printf("\n");
    printf("Iris-virginica(avg,sd)\n"); printIris(virginica,sq_sd_versicolor);
    
    return 0;
}
