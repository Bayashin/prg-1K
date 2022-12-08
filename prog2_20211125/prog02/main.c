//
//  main.c
//  prog02
//
//  Created by k21099kk on 2021/11/25.
//

#include <stdio.h>

typedef struct coordiname{
    double latitude;
    double longitude;
    char address[256];
}Coordiname;

int main(int argc, const char * argv[]) {
    
    Coordiname aikoudai={35.182429629063016, 137.11030966200104,"〒470-0392 愛知県豊田市八草町八千草1247"};
    Coordiname meidenn={35.17857248601123, 136.94905515846932,"〒464-8540 愛知県名古屋市千種区若水３丁目２−１２"};
    
    printf("愛工大　北緯：%f ,東経：%f ,住所：%s\n",aikoudai.latitude,aikoudai.longitude,aikoudai.address);
    printf("名電　北緯：%f ,東経：%f ,住所：%s\n",meidenn.latitude,meidenn.longitude,meidenn.address);
    
    return 0;
}
