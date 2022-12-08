//
//  main.c
//  14_09_arraysum
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[] = {11,12,13,14,15,16,17,18,19,20};
    int i=0,sum =0;
    
    for (;i<10;i++) {
        sum  += a[i];
    }
    
    printf("合計=%d\n",sum);
    
    return 0;
}
