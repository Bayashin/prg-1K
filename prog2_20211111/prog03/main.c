//
//  main.c
//  prog03
//
//  Created by k21099kk on 2021/11/11.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int x1=100;
    int y1=10;
    int x2=200;
    int y2=50;
    
    double distance=sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
    printf("座標(%d,%d)から(%d,%d)までの距離:%f\n",x1,y1,x2,y2,distance);
    
    return 0;
}
