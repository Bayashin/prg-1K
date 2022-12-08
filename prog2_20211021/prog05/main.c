//
//  main.c
//  prog05
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

int main(int argc, const char * argv[]) {
    int num1=10000, num2=200;
    printf("%d, %d\n",num1,num2);
    sort(&num1,&num2);
    printf("%d, %d\n",num1,num2);
    return 0;
}
