//
//  main.c
//  14_08_qq
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,qq;
    
    for (i=1; i<10; i++) {
        for (j=1; j<10; j++) {
            qq = i*j;
            printf("%d x %d = %d\n",i,j,qq);
        }
    }
    
    return 0;
}
