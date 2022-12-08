//
//  main.c
//  13_04_print
//
//  Created by k21099kk on 2021/07/08.
//

#include <stdio.h>

void printFunc(void){
    int i=1;
    for(;i<6;i++){
        printf("%d\n",i);
    }
}

int main(int argc, const char * argv[]) {
   
    printFunc();
    
    return 0;
}
