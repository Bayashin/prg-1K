//
//  main.c
//  prog06
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>

char* my_strcpy(char* a,char* b){
    int i=0;
    while (b[i] != '\0') {
        a[i] = b[i];
        i++;
    }
    a[i]='\0';
    
    return a;
}

int main(int argc, const char * argv[]) {
    char a[128]="abc";
    char b[128];
    
    printf("a:%s, b:%s\n",a,b);
    printf("a:%s, b:%s\n",a,my_strcpy(b, a));
    
    return 0;
}
