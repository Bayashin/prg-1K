//
//  main.c
//  prog12
//
//  Created by k21099kk on 2021/09/30.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int height,weight;
    
    printf("整数で入力\n");
    printf("height(cm) weight(kg)\n"); scanf("%d %d",&height,&weight);
    
    double BMI =weight/(height*0.01*height*0.01);
    printf("BMI: %f\n",BMI);
    
    printf("肥満度: ");
    if (BMI<18.5) {
        printf("やせ\n");
    }else if(18.5<=BMI && BMI<25.0){
        printf("標準\n");
    }else if (25.0<=BMI && BMI<30.0){
        printf("肥満\n");
    }else if(30.0<BMI){
        printf("高度肥満\n");
    }
    
    return 0;
}
