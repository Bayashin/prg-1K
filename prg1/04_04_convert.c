//
//  04_04_convert.c
//  prg1
//
//  Created by k21099kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int nx,ny;
    double dx,dy;
    printf("nx ny\?\n");
    scanf("%d %d",&nx,&ny);
    printf("nx/ny=%d\n",nx/ny);
    dx=nx;
    dy=ny;
    printf("dx/ny=%f\n",dx/ny);
    printf("nx/dy=%f\n",nx/dy);
    return 0;
}
