//
//  04_challenge2_K21099.c
//  prg1
//
//  Created by k21099kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc,const char * argv[])
{
    int crane,turtle,nunber,leg;
    
    printf("鶴と亀の合計は\?\n");scanf("%d",&nunber);
    printf("脚の本数は\?\n");scanf("%d",&leg);
    
    crane=2*nunber-leg/2;
    turtle=nunber-crane;
    
    if (2*crane+4*turtle==leg&&crane>=0&&turtle>=0) //google見ました
        {
            printf("鶴は%d羽、亀は%d匹です\n",crane,turtle);
        }
    if (2*crane+4*turtle!=leg||crane<0||turtle<0) //google見ました
        {
            printf("そのような組み合わせはありません\n");
        }
   
    return 0;
}
