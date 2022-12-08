//
//  07_03_swap3.c
//  prg1
//
//  Created by k21099kk on 2021/05/27.
//

#include <stdio.h>
int main()
{
    int number[3],tmp,i,n;
    
    printf("3つの整数を入力\n");
    for(i=0;i<3;i++){
        scanf("%d",&number[i]);
    }
    
    for(i=0;i<3;i++){
        for(n=i+1;n<3;n++){
            if(number[i]>number[n]){
                tmp=number[i];
                number[i]=number[n];
                number[n]=tmp;
            }
        }
    }
    
    for(i=0;i<3;i++){
        printf("%d\n",number[i]);
    }
    
    return 0;
}
