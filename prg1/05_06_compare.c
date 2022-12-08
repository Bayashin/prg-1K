//
//  05_06_compare.c
//  prg1
//
//  Created by k21099kk on 2021/05/13.
//

#include <stdio.h>
int main ()
{
    int a,b;
    
    printf("a b\?\n");scanf("%d %d",&a,&b);
    
    if(a>b)
    {printf("a>b\n");
    }else if(a==b)
            {printf("a=b\n");
            } else{printf("a<b\n");
            }
    return 0;
    
}
