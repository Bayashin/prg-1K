/*
 おまけ情報：
 ターミナルで「./a.out 引数」のようにa.outを実行すると，
 「引数」のところに書いた文字列がプログラム中で使えます．

 たとえば，
 ./a.out abcde
 とすると，PSTR[] という文字列に"abcde"が代入された状態で
 実行される．実行結果は「edcba」．
*/

#include <stdio.h>

// 「#define」は，後期に習います
// （PSTR[] という文字列を使えるようにするための命令）
#define PSTR (argv[1])


int main(int argc, char *argv[]) {
  int i;

  // i にPSTR[] に入る文字列の長さ（"abcde"だったら5）が入る
  // PSTR[0] == 'a', ..., PSTR[4] == 'e', PSTR[5] == '\0'
  for(i = 0; PSTR[i] != '\0'; i++);

  // PSTR[4]からPSTR[0]までを表示
  // （for文の左側の「i--」は，iを一つ減らして4にするために必要）
  for(i-- ; i >= 0; i--) putchar(PSTR[i]);
  printf("\n");

  return 0;
}
