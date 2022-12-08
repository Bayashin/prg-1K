//
//  main.c
//  prog07
//
//  Created by k21099kk on 2021/10/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a,*px=&a;
    printf("%p\n",&a);
    printf("%p\n",&px);
    
    return 0;
}
