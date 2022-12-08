//
//  main.c
//  12_03_heightWeight2
//
//  Created by k21099kk on 2021/07/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sizeH =3,sizeW =2;
    int i,j,human[sizeH][sizeW];
    
    for (i=0; i<sizeH; i++) {
        printf("%d人目の身長と体重は\? ",i+1); scanf("%d %d",&human[i][0],&human[i][1]);
    }
    
    for (i=0; i<sizeH; i++) {
        printf("%d人目の身長と体重は %d %d です\n",i+1,human[i][0],human[i][1]);
    }
    
    return 0;
}
