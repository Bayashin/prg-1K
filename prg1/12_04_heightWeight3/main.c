//
//  main.c
//  12_04_heightWeight3
//
//  Created by k21099kk on 2021/07/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sizeH =3,sizeW =2;
    int i,j,human[sizeH][sizeW];
    
    for (i=0; i<sizeH; i++) {
        printf("%d人目の身長と体重は\? ",i+1);
        for (j=0; j<sizeW; j++) {
            scanf("%d",&human[i][j]);
        }
    }
    
    for (i=0; i<sizeH; i++) {
        printf("%d人目の身長と体重は ",i+1);
        for (j=0; j<sizeW; j++) {
            printf("%d ",human[i][j]);
        }
        printf("です\n");
    }
    
    return 0;
}
