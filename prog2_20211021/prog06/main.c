//
//  main.c
//  prog06
//
//  Created by k21099kk on 2021/10/21.
//

#include <stdio.h>

void swap(int *pnum1,int *pnum2){
    int tmp;
    tmp = *pnum1;
    *pnum1 = *pnum2;
    *pnum2 = tmp;
}

void sort(int *pnum1,int *pnum2){
    int tmp1=*pnum1, tmp2=*pnum2;
    if (tmp1 > tmp2) {
        swap(&tmp1, &tmp2);
        *pnum1=tmp1; *pnum2=tmp2;
    }
}

void sort3(int *pnum1,int *pnum2,int *pnum3){
    int tmpA=*pnum1, tmpB=*pnum2, tmpC=*pnum3;
    sort(&tmpA,&tmpB);
    sort(&tmpB,&tmpC);
    sort(&tmpA,&tmpB);
    *pnum1=tmpA; *pnum2=tmpB; *pnum3=tmpC;
}

int main(int argc, const char * argv[]) {
    int num1=1000000, num2=2000, num3=40000;
    printf("%d, %d, %d\n",num1,num2,num3);
    sort3(&num1,&num2,&num3);
    printf("%d, %d, %d\n",num1,num2,num3);
    return 0;
}
