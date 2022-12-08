//
//  main.c
//  prog05
//
//  Created by k21099kk on 2021/11/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int NumberOfTimes;
    printf("How many time?\n"); scanf("%d",&NumberOfTimes);
    
    int *Number;
    Number = (int*)malloc(NumberOfTimes*sizeof(int));
    
    if ((Number=(int*)malloc(NumberOfTimes*sizeof(int))) == NULL) {
        printf("No enough memory.\n");
    }else { for (int i=0; i<NumberOfTimes; i++) {
                printf("Number?(%d) ",i+1); scanf("%d",&Number[i]);
            }
            printf("\n");
            for (int i=NumberOfTimes-1; i>=0; i--) {
                printf("Number(%d)= %d\n",i+1,Number[i]);
            }
    }
    
    free(Number);
    
    return 0;
}
