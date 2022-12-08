//
//  main.c
//  prog05
//
//  Created by k21099kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char a[128]="abc";
    char b[128];
    
    printf("a:%s, b:%s\n",a,b);
    printf("a:%s, b:%s\n",a,strcpy(b, a));
    
    return 0;
}
