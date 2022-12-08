//
//  main.c
//  exercise1
//
//  Created by k21099kk on 2021/11/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int menber;
    double average,distributed,standard_deviation,score_sum=0,squared_sum=0;
    int *score;
    
    printf("Menber? "); scanf("%d",&menber);                 //人数の入力
    score=(int*)malloc(menber*sizeof(int));                 //人数分の領域確保
    
    if ((score=(int*)malloc(menber*sizeof(int)))==NULL) {   //領域確保に成功したか
        printf("No enough memory.\n");                      //失敗
    }else{
        for (int i=0; i<menber; i++) {                      //成功
            printf("Score?(%d) ",i+1); scanf("%d",&score[i]);//得点の入力
            score_sum += score[i]*1.0;                          //得点の合計
            squared_sum += pow(score[i], 2);                //得点の2乗の合計
        }
        
        average = score_sum/menber*1.0;                          //平均
        distributed = squared_sum/menber - pow(average, 2);  //分散（2乗の平均ー平均の2乗）
        standard_deviation = sqrt(distributed);              //標準偏差
        
        double z=(50.0-average)/standard_deviation;
        double probability;
        if (50>average) {
            probability = 0.5-erf(z)/2;
        }else if (50.0<average){
            z *= -1;
            probability = 0.5+erf(z)/2;
        }else{
            probability = 0.5;
        }
        
        printf("平均：%f\n",average);
        printf("標準偏差：%f\n",standard_deviation);
        printf("50点以上の確率：%f\n",probability);
    }
    
    free(score);                                             //領域の解放
    
    return 0;
}
