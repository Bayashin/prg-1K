//
//  main.c
//  14_02_logical
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    
    printf("x\? "); scanf("%d",&x);
    
    if (x%2==0 && x%3==0) {
        printf("2および3の倍数です\n");
    } else if (x%2==0){
        printf("2の倍数です\n");
    } else if (x%3==0){
        printf("3の倍数です\n");
    } else {
        printf("2および3の倍数ではありません\n");
    }
    
    
    return 0;
}
