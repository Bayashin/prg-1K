//
//  main.c
//  12_02_heightWeight
//
//  Created by k21099kk on 2021/07/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,human[3][2]={
         {170, 80},
         {160, 50},
         {180, 70},
    };
    
    for (i=0; i<3; i++) {
        printf("%d人目の身長と体重は %d %d です\n",i+1,human[i][0],human[i][1]);
    }
    
    return 0;
}
