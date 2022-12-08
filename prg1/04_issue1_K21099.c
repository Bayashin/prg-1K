//
//  04_issue1_K21099.c
//  prg1
//
//  Created by k21099kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc,const char * argv[])
{
    int hight,weight;
    double S_weight,bmi,difference;
    
    printf("身長は\?\n");scanf("%d",&hight);
    
    printf("体重は\?\n");scanf("%d",&weight);
    
    S_weight=(hight-100)*0.9;
    difference=weight-S_weight;
    printf("標準体重との差:%fkg\n",difference);
    
    bmi=weight/(hight*0.01*hight*0.01);
    printf("BMI:%f\n",bmi);
    return 0;
}
