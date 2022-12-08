//
//  main.c
//  prog04
//
//  Created by k21099kk on 2021/09/30.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int i=0; i<10; i++) {
        printf("hege");
        if ((i+1)%3==0) { //印字した回数＝i+1を3で割った余りが0になる時改行
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
