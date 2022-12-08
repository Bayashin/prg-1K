//
//  09_challenge1_k21099.c
//  prg1
//
//  Created by k21099kk on 2021/06/16.
//

#include <stdio.h>
int main()
{
    int i,j,ans;
    char ch,n[100];
    
    i=0;
    printf("equation\? ");
    while(ch!='='){
        n[i]=ch;
        i++;
    }
    
    j=i; ans=n[0];
    
    for (i=0; i<j; i++) {
        if (n[i]== '+') {
            ans = ans + n[i+1];
        }else if (n[i]== '-') {
            ans = ans - n[i+1];
        }
    }
    
    printf("answer: %d\n",ans);
    
    return 0;
}
