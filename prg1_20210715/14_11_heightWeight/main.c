//
//  main.c
//  14_11_heightWeight
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int HeiWei[3][2] = {
                            {170,80},
                            {160,50},
                            {180,70},
                        };
    
    int i=0;
    
    for (; i<3; i++) {
        printf("%d人目の身長と体重は %d %d です\n",i+1,HeiWei[i][0],HeiWei[i][1]);
    }
    
    return 0;
}
