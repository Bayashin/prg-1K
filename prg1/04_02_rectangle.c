//
//  04_02_rectangle.c
//  prg1
//
//  Created by k21099kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    double height,width,area;
    
    printf("縦は\?\n");
    scanf("%lf",&height);
    
    printf("横は\?\n");
    scanf("%lf",&width);
    
    area=height*width;
    
    printf("長方形の面積は%fです\n",area);
    return 0;
}
