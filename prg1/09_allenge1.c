//
//  09_challenge_k21099.c
//  prg1
//
//  Created by k21099kk on 2021/06/10.
//

#include <stdio.h>
int main()
{
    int i,j,ans;
    char ch,n[100];
    
    i=0;
    printf("equation\? ");
    while((ch=getchar())!='='){
        n[i]=ch;
        i++;
    }
    printf("%c\n",n[0]);
    
    return 0;
}
