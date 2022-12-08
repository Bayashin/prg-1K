//
//  main.c
//  prog11
//
//  Created by k21099kk on 2021/09/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int min=0,max=0;
    
    while (min-max>=0) {
        printf("min max\n"); scanf("%d %d",&min,&max);
        if (min-max<0) {
            break;
        }
        printf("don,t use this numbers\n");
    }
    
    srand((unsigned int)time(NULL));
    for (int j=0; j<100; j++) {
        int num= rand()%(max-min+1)+min;
        printf("%d\n",num);
    }
    
    return 0;
}
