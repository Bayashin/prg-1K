//
//  05_05_ifelseif1.c
//  prg1
//
//  Created by k21099kk on 2021/05/13.
//

#include <stdio.h>
int main  ()
{
    int a;
    
    printf("a\?\n");scanf("%d",&a);
    
    if(a>0)
    {printf("aは正です\n");
    } else if(a==0)
            {printf("aは0です\n");
            }else {printf("aは負の値です\n");
            }
    
    printf("計算終了\n");
    return 0;
    
}
