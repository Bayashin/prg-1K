//
//  main.c
//  prog07
//
//  Created by k21099kk on 2021/09/30.
//

#include <stdio.h>

#include <stdio.h>
#define NUM 10
#define num 0
#define numA 3

int main(int argc, const char * argv[]) {
    for (int i=1; i<=NUM; i++) {
        printf("hege");
        if (i%numA==num) { //印字した回数＝i+1を3で割った余りが0になる時改行
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
