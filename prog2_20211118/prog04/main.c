//
//  main.c
//  prog04
//
//  Created by k21099kk on 2021/11/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char *p;
    p=(char*)malloc(5*sizeof(char));
    
    if ((p=(char*)malloc(5*sizeof(char))) == NULL) {
        printf("No enough memory.\n");
    }else{
        p="hoge";
        printf("p=%s\n",p);
    }
    
    free(p);
    
    return 0;
}
