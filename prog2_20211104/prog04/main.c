//
//  main.c
//  prog04
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char* str="abcd";
    int len=(int)strlen(str);
    
    for (int i=0; i<len; i++) {
        printf("%c\n",*str);
        str++;
    }
    
    return 0;
}
