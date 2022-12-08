//
//  main.c
//  Prototype.3
//
//  Created by k21099kk on 2021/07/21.
//
//3人対戦で、立体的に考えるo×△ゲーム
//Player.2 と Player.3 は自動で打つ
//

#include <stdio.h>

char frame = '|';
char symbol[3][3][3] ;
int i,j,k,a,b;
int winner =0;
int x,y,z;

void Boardsurface(void){                                                                                        //盤面の表示//
    printf("z=0(手前)     z=1(中)     z=2(奥)\n");
        for (i=2; i>=0; i--) {
            printf("%d %c%c%c%c%c    ",i,symbol[0][0][i],frame,symbol[0][1][i],frame,symbol[0][2][i]);
            printf(" %d %c%c%c%c%c    ",i,symbol[1][0][i],frame,symbol[1][1][i],frame,symbol[1][2][i]);
            printf(" %d %c%c%c%c%c",i,symbol[2][0][i],frame,symbol[2][1][i],frame,symbol[2][2][i]);
            printf("\n");
        }
    printf("  0 1 2       0 1 2       0 1 2\n");
    printf("\n");
}

void Judgement(void){                                                                                             //勝利の判定//
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (symbol[i][j][0] == symbol[i][j][1] && symbol[i][j][0] == symbol[i][j][2] && symbol[i][j][0] != ' ') {                    //xy平面(縦列)//
                winner = a;

            }
              if (symbol[i][0][j] == symbol[i][1][j] && symbol[i][0][j] == symbol[i][2][j] && symbol[i][0][j] != ' ') {                  //xy平面(横列)//
                winner = a;
                
            }
            if (symbol[0][i][j] == symbol[1][i][j] && symbol[0][i][j] == symbol[2][i][j] && symbol[0][i][j] != ' '){                     //zy平面(横列)//
                winner = a;
            }
        }
        if (symbol[i][0][0] == symbol[i][1][1] && symbol[i][0][0] == symbol[i][2][2] && symbol[i][0][0] != ' ') {                        //xy平面(斜め)//
            winner = a;
        }
        if (symbol[i][0][2] == symbol[i][1][1] && symbol[i][0][2] == symbol[i][2][0] && symbol[i][0][2] != ' ') {                        //xy平面(斜め)//
            winner = a;

        }
        if (symbol[0][i][0] == symbol[1][i][1] && symbol[0][i][0] == symbol[2][i][2] && symbol[0][i][0] != ' ') {                        //zy平面(斜め)//
            winner = a;

        }
        if (symbol[0][i][2] == symbol[1][i][1] && symbol[0][i][2] == symbol[2][i][0] && symbol[0][i][2] != ' ') {                        //zy平面(斜め)//
            winner = a;

        }
        if (symbol[0][0][i] == symbol[1][1][i] && symbol[0][0][i] == symbol[2][2][i] && symbol[0][0][i] != ' ') {                        //zx平面(斜め)//
            winner = a;
            
        }
        if (symbol[0][2][i] == symbol[1][1][i] && symbol[0][2][i] == symbol[2][0][i] && symbol[0][2][i] != ' ') {                        //zx平面(斜め)//
            winner = a;
        }
    }
    if (symbol[0][0][0] == symbol[1][1][1] && symbol[0][0][0] == symbol[2][2][2] && symbol[0][0][0] != ' ') {                            //立体の対角//
        winner = a;
    }
    if (symbol[0][2][2] == symbol[1][1][1] && symbol[0][2][2] == symbol[2][0][0] && symbol[0][2][2] != ' ') {                            //立体の対角//
        winner = a;
    }
    if (symbol[0][0][2] == symbol[1][1][1] && symbol[0][0][2] == symbol[2][2][0] && symbol[0][0][2] != ' ') {                            //立体の対角//
        winner = a;
    }
    if (symbol[0][2][0] == symbol[1][1][1] && symbol[0][2][0] == symbol[2][0][2] && symbol[0][2][0] != ' ') {                            //立体の対角//
        winner = a;
    }
}

void Judge2(void){                                                                                                           //勝ちそうであれば勝つ、負けそうであれば妨害//
    for (i=0; i<3; i++) {
        if (b==2) {
            break;
        }
        for (j=0; j<3; j++) {
            if (symbol[i][j][0] == symbol[i][j][1] && symbol[i][j][0] != ' ' && symbol[i][j][2] == ' ') {                       //xy平面(縦列)//
                z=i; x=j; y=2;
                b=2;
                break;
            }
            if (symbol[i][j][0] == symbol[i][j][2] && symbol[i][j][0] != ' ' && symbol[i][j][1] == ' ') {
                z=i; x=j; y=1;
                b=2;
                break;
            }
            if (symbol[i][j][1] == symbol[i][j][2] && symbol[i][j][1] != ' ' && symbol[i][j][0] == ' ') {
                z=i; x=j; y=0;
                b=2;
                break;
            }
                
            if (symbol[i][0][j] == symbol[i][1][j] && symbol[i][0][j] != ' ' && symbol[i][2][j] == ' ') {                      //xy平面(横列)//
                z=i; x=2; y=j;
                b=2;
                break;
                }
            if (symbol[i][0][j] == symbol[i][2][j] && symbol[i][0][j] != ' ' && symbol[i][1][j] == ' ') {
                z=i; x=1; y=j;
                b=2;
                break;
                }
            if (symbol[i][1][j] == symbol[i][2][j] && symbol[i][1][j] != ' ' && symbol[i][0][j] == ' ') {
                z=i; x=0; y=j;
                b=2;
                break;
                }
                
            if (symbol[0][i][j] == symbol[1][i][j] && symbol[0][i][j] != ' ' && symbol[2][i][j] == ' '){                     //zy平面(横列)//
                z=2; x=i; y=j;
                b=2;
                break;
            }
            if (symbol[0][i][j] == symbol[2][i][j] && symbol[0][i][j] != ' ' && symbol[1][i][j] == ' '){
                z=1; x=i; y=j;
                b=2;
                break;
            }
            if (symbol[1][i][j] == symbol[2][i][j] && symbol[1][i][j] != ' ' && symbol[0][i][j] == ' '){
                z=0; x=i; y=j;
                b=2;
                break;
            }
        }
        
        
        if (symbol[i][0][0] == symbol[i][1][1] && symbol[i][0][0] != ' ' && symbol[i][2][2] == ' ') {                        //xy平面(斜め)//
            z=i; x=2; y=2;
            b=2;
            break;
        }
        if (symbol[i][0][0] == symbol[i][2][2] && symbol[i][0][0] != ' ' && symbol[i][1][1] == ' ') {
            z=i; x=1; y=1;
            b=2;
            break;
        }
        if (symbol[i][1][1] == symbol[i][2][2] && symbol[i][1][1] != ' ' && symbol[i][0][0] == ' ') {
            z=i; x=0; y=0;
            b=2;
            break;
        }
        
        
        if (symbol[i][0][2] == symbol[i][1][1] && symbol[i][0][2] != ' ' && symbol[i][2][0] == ' ') {                        //xy平面(斜め)//
            z=i; x=2; y=0;
            b=2;
            break;
        }
        if (symbol[i][0][2] == symbol[i][2][0] && symbol[i][0][2] != ' ' && symbol[i][1][1] == ' ') {
            z=i; x=1; y=1;
            b=2;
            break;
        }
        if (symbol[i][1][1] == symbol[i][2][0] && symbol[i][1][1] != ' ' && symbol[i][0][2] == ' ') {
            z=i; x=0; y=2;
            b=2;
            break;
        }
        
        
        if (symbol[0][i][0] == symbol[1][i][1] && symbol[0][i][0] != ' ' && symbol[2][i][2] == ' ') {                        //zy平面(斜め)//
            z=2; x=i; y=2;
            b=2;
            break;
        }
        if (symbol[0][i][0] == symbol[2][i][2] && symbol[0][i][0] != ' ' && symbol[1][i][1] == ' ') {
            z=1; x=i; y=1;
            b=2;
            break;
        }
        if (symbol[1][i][1] == symbol[2][i][2] && symbol[1][i][1] != ' ' && symbol[0][i][0] == ' ') {
            z=0; x=i; y=0;
            b=2;
            break;
        }
        
        
        if (symbol[0][i][2] == symbol[1][i][1] && symbol[0][i][2] != ' ' && symbol[2][i][0] == ' ') {                        //zy平面(斜め)//
            z=2; x=i; y=0;
            b=2;
            break;
        }
        if (symbol[0][i][2] == symbol[2][i][0] && symbol[0][i][2] != ' ' && symbol[1][i][1] == ' ') {
            z=1; x=i; y=1;
            b=2;
            break;
        }
        if (symbol[1][i][1] == symbol[2][i][0] && symbol[1][i][1] != ' ' && symbol[0][i][2] == ' ') {
            z=0; x=i; y=2;
            b=2;
            break;
        }
        
        
        if (symbol[0][0][i] == symbol[1][1][i] && symbol[0][0][i] != ' ' && symbol[2][2][i] == ' ') {                        //zx平面(斜め)//
            z=2; x=2; y=i;
            b=2;
            break;
        }
        if (symbol[0][0][i] == symbol[2][2][i] && symbol[0][0][i] != ' ' && symbol[1][1][i] == ' ') {
            z=1; x=1; y=i;
            b=2;
            break;
        }
        if (symbol[1][1][i] == symbol[2][2][i] && symbol[1][1][i] != ' ' && symbol[0][0][i] == ' ') {
            z=0; x=0; y=i;
            b=2;
            break;
        }
        
        
        if (symbol[0][2][i] == symbol[1][1][i] && symbol[0][2][i] != ' ' && symbol[2][0][i] == ' ')  {                        //zx平面(斜め)//
            z=2; x=0; y=i;
            b=2;
            break;
        }
        if (symbol[0][2][i] == symbol[2][0][i] && symbol[0][2][i] != ' ' && symbol[1][1][i] == ' ')  {
            z=1; x=1; y=i;
            b=2;
            break;
        }
        if (symbol[1][1][i] == symbol[2][0][i] && symbol[1][1][i] != ' ' && symbol[0][2][i] == ' ')  {
            z=0; x=2; y=i;
            b=2;
            break;
        }

    }
    
    
    if (symbol[0][0][0] == symbol[1][1][1] && symbol[0][0][0] != ' ' && symbol[2][2][2] == ' ') {                            //立体の対角//
        z=2; x=2; y=2;
        b=2;
    }
    if (symbol[0][0][0] == symbol[2][2][2] && symbol[0][0][0] != ' ' && symbol[1][1][1] == ' ') {
        z=1; x=1; y=1;
        b=2;
    }
    if (symbol[1][1][1] == symbol[2][2][2] && symbol[1][1][1] != ' ' && symbol[0][0][0] == ' ') {
        z=0; x=0; y=0;
        b=2;
    }
    
    
    
    if (symbol[0][2][2] == symbol[1][1][1] && symbol[0][2][2] != ' ' && symbol[2][0][0] == ' ') {                            //立体の対角//
        z=2; x=0; y=0;
        b=2;
    }
    if (symbol[0][2][2] == symbol[2][0][0] && symbol[0][2][2] != ' ' && symbol[1][1][1] == ' ') {
        z=1; x=1; y=1;
        b=2;
    }
    if (symbol[1][1][1] == symbol[2][0][0] && symbol[1][1][1] != ' ' && symbol[0][2][2] == ' ') {
        z=0; x=2; y=2;
        b=2;
    }
    
    
    
    if (symbol[0][0][2] == symbol[1][1][1] && symbol[0][0][2] != ' ' && symbol[2][2][0] == ' ') {                            //立体の対角//
        z=2; x=2; y=0;
        b=2;
    }
    if (symbol[0][0][2] == symbol[2][1][0] && symbol[0][0][2] != ' ' && symbol[1][1][1] == ' ') {
        z=1; x=1; y=1;
        b=2;
    }
    if (symbol[1][1][1] == symbol[2][2][0] && symbol[1][1][1] != ' ' && symbol[0][0][2] == ' ') {
        z=0; x=0; y=2;
        b=2;
    }
    
    
    
    if (symbol[0][2][0] == symbol[1][1][1] && symbol[0][2][0] != ' ' && symbol[2][0][2] == ' ') {                            //立体の対角//
        z=2; x=0; y=2;
        b=2;
    }
    if (symbol[0][2][0] == symbol[2][0][2] && symbol[0][2][0] != ' ' && symbol[1][1][1] == ' ') {
        z=1; x=1; y=1;
        b=2;
    }
    if (symbol[1][1][1] == symbol[2][0][2] && symbol[1][1][1] != ' ' && symbol[0][2][0] == ' ') {
        z=0; x=2; y=0;
        b=2;
    }
}



int main(int argc, const char * argv[]) {
    

    
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
    
    
    
    
    
    int n=0;                                                               //nは埋まっているマスの数//
                                                                             //bはコンピュータが入力できたかどうか//

    while (n<27 ) {                                                         //盤面が全て埋まった時終了//
        
        
        a=1;
        printf("Player.1：x,y,z(0~2)  "); scanf("%d,%d,%d",&x,&y,&z);       //Player.1の手番//

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
        Judgement();
        if (winner != 0) {                                                  //Player.1が勝利した場合,433行目へ//
            break;
        }
        n++;

        
        
        a=2; b=0;
        printf("Player.2：x,y,z(0~2)");                                       //Player.2の手番//

        z=0;                                                                //コンピュータによる入力//
        while (z<3) {
            x=0;
            while (x<3) {
                y=0;
                while (y<3) {
                    if (symbol[z][x][y] == ' ') {
                        b=1;
                        break;
                    }
                    y++;
                }
                if (b==1) {
                    break;
                }
                x++;
            }
            if (b==1) {
                break;
            }
            z++;
        }
        
        Judge2();
        
        printf("%d,%d,%d\n",x,y,z);
        
        symbol[z][x][y] = 'x';                                                //指定した座標に入力//
    
            Boardsurface();
                Judgement();
        if (winner != 0) {                                                    //Player.2が勝利した場合,433行目へ//
            break;
        }
        n++;
        
        
        a=3; b=0;
        printf("Player.3：x,y,z(0~2)");                                       //Player.3の手番//

        z=2;                                                                  //コンピュータによる入力//
        while (z>=0) {
            x=2;
            while (x>=0) {
                y=2;
                while (y>=0) {
                    if (symbol[z][x][y] == ' ') {
                        b=1;
                        break;
                    }
                    y--;
                }
                if (b==1) {
                    break;
                }
                x--;
            }
            if (b==1) {
                break;
            }
            z--;
        }
            
        Judge2();
        
        printf("%d,%d,%d\n",x,y,z);

        symbol[z][x][y] = '^';                                               //指定した座標に入力//
    
            Boardsurface();
                Judgement();
        if (winner != 0) {                                                  //Player.3が勝利した場合,433行目へ//
            break;
        }
        n++;
                    
    }
        
        if (n==27 && winner ==0) {                                           //勝負結果の宣言//
            printf("Draw\n");
        } else {
            printf("Player.%d Win !!\n",winner);
        }
        
        return 0;
    }

