//
//  main.c
//  prog06
//
//  Created by k21099kk on 2021/11/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

typedef struct iris{
    double sepal_length;
    double sepal_width;
    double petal_length;
    double petal_width;
    char class[20];
}Iris;

void printIris(Iris iris){
    printf("sepal_lengrh(%.1f)\n",iris.sepal_length);
    printf("sepal_width(%.1f)\n",iris.sepal_width);
    printf("petal_length(%.1f)\n",iris.petal_length);
    printf("petal_width(%.1f)\n",iris.petal_width);
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
    
    printf("Iris-setosa(avg)\n"); printIris(setosa); printf("\n");
    printf("Iris-versicolor(avg)\n"); printIris(versicolor); printf("\n");
    printf("Iris-virginica(svg)\n"); printIris(virginica);
    
    return 0;
}
