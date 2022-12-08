//
//  04_05_average.c
//  prg1
//
//  Created by k21099kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int h1,h2,h3;
    double average,x;
    
    printf("No.1? ");
    scanf("%d", &h1);
    printf("No.2? ");
    scanf("%d", &h2);
    printf("No.3? ");
    scanf("%d", &h3);
    average=(h1+h2+h3)/3.0;
    printf("average=%f\n",average);
    return 0;
}
