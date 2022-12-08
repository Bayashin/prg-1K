//
//  main.c
//  11_issue1_k21099
//
//  Created by k21099kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,count =-1;
    int size =11;
    char array[size];
    
    printf("input (10文字以下) : "); scanf("%s",array);
    
    for (i=0; array[i] !='\0'; i++) {
       count++;
    }
    
    i=0;
    while (array[i] == array[count] && i <= count) {
        i++; count--;
    }
    
    if (i > count) {
        printf("回文OK\n");
    } else {
        printf("回文NO\n");
    }
    
    return 0;
}
