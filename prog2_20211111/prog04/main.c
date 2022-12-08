//
//  main.c
//  prog04
//
//  Created by k21099kk on 2021/11/11.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[100];
    printf("文字列の入力\n"); scanf("%s",str);
    for (int i=0; i<strlen(str); i++) str[i]=toupper(str[i]);
    printf("%s\n",str);
    
    return 0;
}
