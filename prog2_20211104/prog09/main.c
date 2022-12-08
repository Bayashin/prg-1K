//
//  main.c
//  prog09
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

void swap_str_ptr(char* *str1,char* *str2){
    char *tmp = *str1;
    *str1=*str2;
    *str2=tmp;
}

void sort_str_ptr (char* *str1,char* *str2){
    if (strlen(*str1)>strlen(*str2)) {
        swap_str_ptr(&*str1, &*str2);
    }
}

int main(int argc, const char * argv[]) {
    char *a="abcd";
    char *b="xyz";
    
    printf("a:%s, b:%s\n",a,b);
    sort_str_ptr(&a, &b);
    printf("a:%s, b:%s\n",a,b);
    
    return 0;
}
