//
//  main.c
//  11_05_scan_rev
//
//  Created by k21099kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,count =0;
    int size =11;
    char array[size];
    
    printf("入力(10文字以内) : "); scanf("%s",array);
    
    for (i=0; array[i] !='\0'; i++) {
       count++;
    }

    for (i=count; i>=0; i--) {
        printf("%c",array[i]);
    }
    printf("\n");
    
    return 0;
    
}
