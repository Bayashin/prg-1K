//
//  main.c
//  excercise01
//
//  Created by k21099kk on 2021/10/21.
//

#include <stdio.h>
#include <math.h>

void getAvgSD(int *pnum1,int *pnum2,double *pavg,double *psd){
    *pavg = (*pnum1 + *pnum2)/2.0;
    *psd = sqrt((pow(*pnum1-*pavg,2)+pow(*pnum2-*pavg,2))/2.0);
}

int main(int argc, const char * argv[]) {
    
    int num1,num2;
    double avg,sd;

    printf("Number?(x y)\n"); scanf("%d %d",&num1,&num2);
    getAvgSD(&num1, &num2, &avg, &sd);
    printf("avg:%f sd:%f\n",avg,sd);
    
    return 0;
}

