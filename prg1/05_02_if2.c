//
//  05_02_if2.c
//  prg1
//
//  Created by k21099kk on 2021/05/13.
//

#include <stdio.h>
int main(int argc,const char * argv[])
{
    int a,b;
    
    printf("a\?\n");scanf("%d",&a);
    printf("b\?\n");scanf("%d",&b);
    
    if(a==b)
        {
            printf("aとbは等しいです\n");
        }
    
    printf("計算終了\n");
    return 0;
}
