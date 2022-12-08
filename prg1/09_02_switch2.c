//
//  09_02_switch2.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
int main()
{
    char ch;
    
    printf("text\? ");
    
    while((ch=getchar())!='\n'){
        switch(ch){
            case  ' ':
                printf("\n");
                break;
            default:
                printf("%c",ch);
                break;
        }
    }
    printf("\n");
    return 0;
}
