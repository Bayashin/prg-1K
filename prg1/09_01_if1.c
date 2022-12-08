//
//  09_01_if1.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
int main()
{
    int n;
    
    printf("n\? ");scanf("%d",&n);printf("\n");
    
    if(n==1){
        printf("AAA\n");
    } else if(n==2) {
        printf("BBB\n");
    } else {
        printf("Defaultです\n");
    }
    
    return 0;
}
