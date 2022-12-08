//
//  main.c
//  prog08
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>

void swap_str_ptr(char* *str1,char* *str2){
    char *tmp = *str1;
    *str1=*str2;
    *str2=tmp;
}

int main(int argc, const char * argv[]) {
    char *a="AB";
    char *b="XY";
    
    printf("a:%s, b:%s\n",a,b);
    swap_str_ptr(&a, &b);
    printf("a:%s, b:%s\n",a,b);
    
    return 0;
}
