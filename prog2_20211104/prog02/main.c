//
//  main.c
//  prog02
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>

int my_strlen(const char* str){
    int len=0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main(int argc, const char * argv[]) {
    char str1[128]="abc";
    char str2[]="cde";
    char *str="fgh";
        
    printf("%s: %d文字, %dバイト\n",str1,(int)my_strlen(str1),(int)sizeof(str1));
    printf("%s: %d文字, %dバイト\n",str2,(int)my_strlen(str2),(int)sizeof(str2));
    printf("%s: %d文字, %dバイト\n",str,(int)my_strlen(str),(int)sizeof(str));
    return 0;
}
