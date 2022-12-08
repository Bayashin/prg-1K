//
//  03_03-calc.c
//  prg1
//
//  Created by k21099kk on 2021/04/29.
//

#include <stdio.h>
int main (int argc, const char * argv[])
{
    int a,b,c,d,e;
    a=3; //aに3を代入
    b=4; //bに4を代入
    c=2; //cに2を代入
    d=8; //dに8を代入
    e=a+b*c/d;
    printf("%d + %d * %d / %d = %d\n",a,b,c,d,e);
    return 0;
}
