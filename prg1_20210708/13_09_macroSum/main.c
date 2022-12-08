//
//  main.c
//  13_09_macroSum
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>
#define XMIN (5)
#define XMAX (15)

int main(int argc, const char * argv[]) {
    int a = XMIN, b = XMAX;
    int i,sum;
    
       for (i=a,sum =0;i <= b; i++) {
           sum += i;
       }
       printf("総和 = %d\n",sum);
    
    return 0;
}
