//
//  main.c
//  Prototype.1
//
//  Created by k21099kk on 2021/07/14.
//
//3人対戦で、立体的に考える○×
//プレイヤーは一人、コンピュータは打つだけ


#include <stdio.h>

char frame = '|';
char symbol[3][3][3] ;
int i,j,k,b;
int winner =0;

void Boardsurface(void){     //盤面の表示//
    printf("z=0(手前)     z=1(中)     z=2(奥)\n");
    printf("  0 1 2       0 1 2       0 1 2\n");
        for (i=2; i>=0; i--) {
            printf("%d %c%c%c%c%c    ",i,symbol[0][0][i],frame,symbol[0][1][i],frame,symbol[0][2][i]);
            printf(" %d %c%c%c%c%c    ",i,symbol[1][0][i],frame,symbol[1][1][i],frame,symbol[1][2][i]);
            printf(" %d %c%c%c%c%c",i,symbol[2][0][i],frame,symbol[2][1][i],frame,symbol[2][2][i]);
            printf("\n");
            
        }
    printf("\n");
}

void Judgment(void){
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (symbol[i][j][0] == symbol[i][j][1] && symbol[i][j][0] == symbol[i][j][2] && symbol[i][j][0] != ' ') {                       //xy平面(縦列)//
                  winner = b;
            
              }
              if (symbol[i][0][j] == symbol[i][1][j] == symbol[i][2][j] ) {                       //xy平面(横列)//
                  winner = b;
                
              }
            if (symbol[0][i][j] == symbol[1][i][j] && symbol[0][i][j] == symbol[2][i][j] && symbol[0][i][j] != ' '){                          //zy平面(横列)//
                winner = b;
              }
          }
        if (symbol[i][0][0] == symbol[i][1][1] && symbol[i][0][0] == symbol[i][2][2] && symbol[i][0][0] != ' ') {                             //xy平面(斜め)//
            winner = b;
        }
        if (symbol[i][0][2] == symbol[i][1][1] && symbol[i][0][2] == symbol[i][2][0] && symbol[i][0][2] != ' ') {                             //xy平面(斜め)//
            winner = b;
          
        }
        if (symbol[0][i][0] == symbol[1][i][1] && symbol[0][i][0] == symbol[2][i][2] && symbol[0][i][0] != ' ') {                             //zy平面(斜め)//
            winner = b;
          
        }
        if (symbol[0][i][2] == symbol[1][i][1] && symbol[0][i][2] == symbol[2][i][0] && symbol[0][i][2] != ' ') {                             //zy平面(斜め)//
            winner = b;
          
        }
        if (symbol[0][0][i] == symbol[1][1][i] && symbol[0][0][i] == symbol[2][2][i] && symbol[0][0][i] != ' ') {                             //zx平面(斜め)//
            winner = b;
            
        }
        if (symbol[0][2][i] == symbol[1][1][i] && symbol[0][2][i] == symbol[2][0][i] && symbol[0][2][i] != ' ' ) {                             //zx平面(斜め)//
            winner = b;
        }
    }
    if (symbol[0][0][0] == symbol[1][1][1] == symbol[2][2][2] ) {                                 //立体の対角//
        winner = b;
    }
    if (symbol[0][2][2] == symbol[1][1][1] == symbol[2][0][0] ) {                                 //立体の対角//
        winner = b;
    }
    if (symbol[0][0][2] == symbol[1][1][1] == symbol[2][2][0] ) {                                 //立体の対角//
        winner = b;
    }
    if (symbol[0][2][0] == symbol[1][1][1] == symbol[2][0][2] ) {                                 //立体の対角//
        winner = b;
    }
}


int main(int argc, const char * argv[]) {
    
    int n,x,y,z,a;
   
    
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            for (k=0; k<3; k++) {
                symbol[i][j][k] = ' ';
            }
        }
    }
    
    printf("Player.1：O  Player.2：X Player.3:^ \n");
    printf("x →,y ↑\n");
    
    Boardsurface();
    
    int s=0,t=0;
    n=0; //nは埋まっているマスの数//
    while (n<27 ) {                                                       //盤面が全て埋まった時終了//
        if (s==1 || t==1) {                                               //Player.2またはPlayer.3が勝利した場合、break//
            break;
        }
        
        
        
        printf("Player.1：x,y,z(0~2)  "); scanf("%d,%d,%d",&x,&y,&z);      //Player.1の手番//
        b=1;
        if (x<0 || 2<x || y<0 || 2<y || z<0 || 2<z) {                      //有効な座標であるか//
            printf("Don't exist\n");
            continue;
        }
        if (symbol[z][x][y] != ' ') {                                       //指定した座標は空白であるか//
                   printf("Can't put\n");
                   continue;
               }
        symbol[z][x][y] = 'O';
        Boardsurface();
        Judgment();
        if (winner != 0) {                                                  //Player.1が勝利した場合,break//
            break;
        }
        n++;
        
        
        
        int c;
        a=0;
        while (a==0) {                                                          //Player.2の手番、入力が完了するまで//
            printf("Player.2：x,y,z(0~2)  \n");
            b=2; c=0;
            
            z=0; x=0; y=0;
            while (z<3) {
                if (c==1) {
                    break;
                }
                while (x<3) {
                    if (c==1) {
                        break;
                    }
                    while (y<3) {
                        if (symbol[z][x][y] == ' ') {
                            printf("%d %d %d\n",x,y,z);
                            c=1;
                            break;
                        }
                        y++;
                    }
                    x++;
                }
                z++;
            }
           
            symbol[z][x][y] = 'X';
            Boardsurface();
            Judgment();

            if (winner != 0) {
                s=1; a=1;
                break;
            }
            n++;
        }
       
        
        
        
        
        a=0;
        while (a==0) {                                                        //Player.3の手番、入力が完了するまで//
            printf("Player.3：x,y,z(0~3) \n ");
            b=3; c=0;
            
            z=0; x=0; y=0;
            while (z<3) {
                if (c==1) {
                    break;
                }
                while (x<3) {
                    if (c==1) {
                        break;
                    }
                    while (y<3) {
                        if (symbol[z][x][y] == ' ') {
                            printf("%d %d %d\n",x,y,z);
                            c=1;
                            break;
                        }
                        y++;
                    }
                    x++;
                }
                z++;
            }
           
            symbol[z][x][y] = '^';
            Boardsurface();
            Judgment();
         
            if (winner != 0) {                                                 //Player.3が勝利した場合、98行目へ//
                t=1; a=1;
                break;
            }
            n++;
        }
    }
    
    if (n==27 && winner ==0) {                                               //勝負結果の宣言//
        printf("Draw\n");
    } else {
        printf("Player.%d Win !!\n",winner);
    }
    
    return 0;
}

