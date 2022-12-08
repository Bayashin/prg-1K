//
//  main.c
//  13_10_macroQQ
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>
#define  XMIN (1)
#define  XMAX (9)

int main(int argc, const char * argv[]) {
    int i,j;
    
    for (i= XMIN ; i<= XMAX; i++) {
        for (j= XMIN; j<= XMAX; j++) {
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}
