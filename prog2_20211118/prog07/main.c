//
//  main.c
//  prog07
//
//  Created by k21099kk on 2021/11/22.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int value=0,num=0;
    int *number;
    number=(int*)malloc(1*sizeof(int));                //最低限の領域確保
    
    if ((number=(int*)malloc(1 *sizeof(int))) == NULL) { //領域を確保が成功したか
        printf("No enough memory.\n");                 //失敗、終了
    }else{
        while (1) {                                   //成功
            printf("Number? "); scanf("%d",&value);   //値の入力
            number[num]=value;
            num++;
            
            if (value<0) break;                       //値の符号判定,負なら終了

            number=(int*)realloc(number, num+1*sizeof(int)); //値が正の場合、領域を一つ増やす
            if ((number=(int*)realloc(number, num+1*sizeof(int))) == NULL) { //領域の追加に成功したか
                printf("No enough memory.\n");              //失敗、終了
                break;
            }
        }
        
        for (int i=0; i<num; i++) printf("Number[%d]: %d\n",i,number[i]); //入力された値の印字
            printf("\n");
    }
    
    free(number);                                           //領域の解放
    
    return 0;
}
