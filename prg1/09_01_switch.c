//
//  09_01_switch.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
int main()
{
    int n;
    
    printf("n\? ");scanf("%d",&n);printf("\n");
    
    switch(n){
        case 1:
            printf("AAA\n");
            break;
        case 2:
            printf("BBB\n");
            break;
        default:
            printf("Defaultです\n");
            break;
    }
    return 0;
}
