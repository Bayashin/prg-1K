//
//  main.c
//  14_12_string
//
//  Created by k21099kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int size = 10;
    char array[size +1];
    
    printf("入力(%d文字以内) : ",size); scanf("%s",array);
    printf("%s\n",array);
    
    return 0;
}
