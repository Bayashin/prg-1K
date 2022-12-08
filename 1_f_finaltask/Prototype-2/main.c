//
//  main.c
//  Prototype.1
//
//  Created by k21099kk on 2021/07/14.
//
//3人対戦で、立体的に考えるo×△ゲーム
//プレイヤーは三人

#include <stdio.h>

char frame = '|';
char symbol[3][3][3] ;
int i,j,k,a;
int winner =0;

void Boardsurface(void){                                                                                        //盤面の表示//
    printf("z=0(手前)  z=1(中)   z=2(奥)\n");
        for (i=2; i>=0; i--) {
            printf("%d %c%c%c%c%c    ",i,symbol[0][0][i],frame,symbol[0][1][i],frame,symbol[0][2][i]);
            printf(" %d %c%c%c%c%c    ",i,symbol[1][0][i],frame,symbol[1][1][i],frame,symbol[1][2][i]);
            printf(" %d %c%c%c%c%c",i,symbol[2][0][i],frame,symbol[2][1][i],frame,symbol[2][2][i]);
            printf("\n");
            
        }
    printf("\n");
}

void Judgment(void){                                                                                             //勝利条件の判定//
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (symbol[i][j][0] == symbol[i][j][1] && symbol[i][j][0] == symbol[i][j][2] && symbol[i][j][0] != ' ') {                       //xy平面(縦列)//
                  winner = a;
            
              }
              if (symbol[i][0][j] == symbol[i][1][j] && symbol[i][0][j] == symbol[i][2][j] && symbol[i][0][j] != ' ') {                                  //xy平面(横列)//
                  winner = a;
                
              }
            if (symbol[0][i][j] == symbol[1][i][j] && symbol[0][i][j] == symbol[2][i][j] && symbol[0][i][j] != ' '){                          //zy平面(横列)//
                winner = a;
              }
          }
        if (symbol[i][0][0] == symbol[i][1][1] && symbol[i][0][0] == symbol[i][2][2] && symbol[i][0][0] != ' ') {                             //xy平面(斜め)//
            winner = a;
        }
        if (symbol[i][0][2] == symbol[i][1][1] && symbol[i][0][2] == symbol[i][2][0] && symbol[i][0][2] != ' ') {                             //xy平面(斜め)//
            winner = a;
          
        }
        if (symbol[0][i][0] == symbol[1][i][1] && symbol[0][i][0] == symbol[2][i][2] && symbol[0][i][0] != ' ') {                             //zy平面(斜め)//
            winner = a;
          
        }
        if (symbol[0][i][2] == symbol[1][i][1] && symbol[0][i][2] == symbol[2][i][0] && symbol[0][i][2] != ' ') {                             //zy平面(斜め)//
            winner = a;
          
        }
        if (symbol[0][0][i] == symbol[1][1][i] && symbol[0][0][i] == symbol[2][2][i] && symbol[0][0][i] != ' ') {                             //zx平面(斜め)//
            winner = a;
            
        }
        if (symbol[0][2][i] == symbol[1][1][i] && symbol[0][2][i] == symbol[2][0][i] && symbol[0][2][i] != ' ') {                             //zx平面(斜め)//
            winner = a;
        }
    }
    if (symbol[0][0][0] == symbol[1][1][1] && symbol[0][0][0] == symbol[2][2][2] && symbol[0][0][0] != ' ') {                                 //立体の対角//
        winner = a;
    }
    if (symbol[0][2][2] == symbol[1][1][1] && symbol[0][2][2] == symbol[2][0][0] && symbol[0][2][2] != ' ') {                                 //立体の対角//
        winner = a;
    }
    if (symbol[0][0][2] == symbol[1][1][1] && symbol[0][0][2] == symbol[2][2][0] && symbol[0][0][2] != ' ') {                                 //立体の対角//
        winner = a;
    }
    if (symbol[0][2][0] == symbol[1][1][1] && symbol[0][2][0] == symbol[2][0][2] && symbol[0][2][0] != ' ') {                                 //立体の対角//
        winner = a;
    }
}


int main(int argc, const char * argv[]) {
    
    int n,x,y,z;
   
    
    for (i=0; i<3; i++) {                                                //盤面のますに' 'を代入//
        for (j=0; j<3; j++) {
            for (k=0; k<3; k++) {
                symbol[i][j][k] = ' ';
            }
        }
    }
    
    printf("Player.1：O  Player.2：X Player.3:^ \n");
    printf("\n");
    
    Boardsurface();
    
    int s=0;
    n=0;                                                                                //nは埋まっているマスの数//
    while (n<27 ) {                                                                     //盤面が全て埋まった時終了//
        
        if (s!=0) {
            break;                                                                      //(s = 1):勝負が決まった時//
        }
        
        a = 1;
        while (a <= 3) {                                                                //1<= a <= 3 のループ//
            printf("Player.%d：x,y,z(0~2)  ",a); scanf("%d,%d,%d",&x,&y,&z);            //Player.aの手番//

                   if (x<0 || 2<x || y<0 || 2<y || z<0 || 2<z) {                       //有効な座標であるか//
                       printf("Don't exist\n");
                       printf("\n");
                       continue;
                   }
                   if (symbol[z][x][y] != ' ') {                                       //指定した座標は空白であるか//
                       printf("Can't put\n");
                       printf("\n");
                       continue;
                          }
            if (a==1) {                                                                //指定した座標に入力//
                symbol[z][x][y] = 'O';
            }else if (a==2){
                symbol[z][x][y] = 'x';
            }else if (a==3){
                symbol[z][x][y] = '^';
            }
                Boardsurface();
                   Judgment();
                   if (winner != 0) {                                                  //Player.cが勝利した場合,100行目へ//
                       s=1;
                       break;
                   }
            a++; n++;
                    
        }
        
    }
    
    if (n==27 && winner ==0) {                                               //勝負結果の宣言//
        printf("Draw\n");
    } else {
        printf("Player.%d Win !!\n",winner);
    }
    
    return 0;
}

