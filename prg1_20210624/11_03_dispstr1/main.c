//
//  main.c
//  11_03_dispstr1
//
//  Created by k21099kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    char array[] = "abcde";
    
    printf("一文字づつ印字: ");
    for (i=0; i<6; i++) {
        printf("%c",array[i]);
    }
    printf("\n");
    
    return 0;
}
