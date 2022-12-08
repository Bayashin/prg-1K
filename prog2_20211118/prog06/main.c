//
//  main.c
//  prog06
//
//  Created by k21099kk on 2021/11/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char *str1="ABCDE";
    char *str2="XYZ";
    char *str;
    
    int Asize = (int)strlen(str1), Bsize = (int)strlen(str2);
    
    str=(char*)malloc(Asize+Bsize+1 *sizeof(char));
    
    if ((str=(char*)malloc(Asize+Bsize+1 *sizeof(char))) == NULL) {
        printf("No enough memory.\n");
    }else{
        strcpy(str, str1); strcat(str, str2);
        printf("str= %s\n",str);
    }
    
    free(str);
    
    return 0;
}
