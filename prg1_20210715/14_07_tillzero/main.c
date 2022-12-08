//
//  main.c
//  14_07_tillzero
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int zandaka = 1000,hikidasi;
    
    while (zandaka >0) {
        printf("x\? "); scanf("%d",&hikidasi);
        
        if (hikidasi == 0) {
            break;
        }
        
        zandaka -= hikidasi;
        printf("残高: %d\n",zandaka);
       
    }
    printf("取引終了\n");
    
    return 0;
}
