//
//  main.c
//  prog03
//
//  Created by k21099kk on 2021/10/21.
//

#include <stdio.h>

void getSumDiff(int num1,int num2,int *psum,int *pdiff){
    *psum=num1+num2;
    *pdiff=num1-num2;
}

int main(int argc, const char * argv[]) {
    int num1=10, num2=5, sum=0, diff=0;
    getSumDiff(num1,num2,&sum,&diff);
    printf("%d,%d\n",sum,diff);
    
    return 0;
}
