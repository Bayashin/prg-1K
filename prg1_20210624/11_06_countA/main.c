//
//  main.c
//  11_06_countA
//
//  Created by k21099kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,count =0;
    int size =11;
    char array[size];
    
    printf("input (10文字以下) : "); scanf("%s",array);
    
    for (i=0; array[i] != '\0'; i++) {
        if (array[i] == 'a') {
            count++;
        }
    }
    printf("aの数は%dです\n",count);
    
    return 0;
    
}
