//
//  main.c
//  prog10
//
//  Created by k21099kk on 2021/11/11.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[128]="foo,bar,hoge,fuga";
    char *value;
    value=strtok(str,",");
    
    while (value!=NULL) {
        printf("%s\n",value);
        value=strtok(NULL, ",");
    }
    
    return 0;
}
