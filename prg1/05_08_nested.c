//
//  05_08_nested.c
//  prg1
//
//  Created by k21099kk on 2021/05/13.
//

#include <stdio.h>
int main()
{
    int a,b;
    
    printf("a\?\n");scanf("%d",&a);
    printf("b\?\n");scanf("%d",&b);

    if(a>0){
        if(b==0){
            printf("A\n");
        }else if(b>0){
            printf("B\n");
        }else {
                printf("C\n");
              }
    }else {
            printf("D\n");
    }
    
    return 0;
}
