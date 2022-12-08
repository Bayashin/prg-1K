//
//  main.c
//  prog07
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

void swap_str(char* str1,char* str2){
    char tmp[128];
    strcpy(tmp, str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);
}

int main(int argc, const char * argv[]) {
    char a[128]="abcde";
    char b[128]="xyz";
    
    printf("a:%s, b:%s\n",a,b);
    swap_str(a, b);
    printf("a:%s, b:%s\n",a,b);
    
    return 0;
}
