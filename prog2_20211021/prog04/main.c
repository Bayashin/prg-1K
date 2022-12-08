//
//  main.c
//  prog04
//
//  Created by k21099kk on 2021/10/21.
//

void swap(int *pnum1,int *pnum2){
    int tmp;
    tmp = *pnum1;
    *pnum1 = *pnum2;
    *pnum2 = tmp;
}

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1=10, num2=20;
    printf("%d, %d\n",num1,num2);
    swap(&num1,&num2);
    printf("%d, %d\n",num1,num2);
    return 0;
}
