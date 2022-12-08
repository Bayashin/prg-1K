//　「extern int b;」は
//　「int型　変数bは別ファイルにある定義を使ってね」という意味

extern int b;

int sub(int a){
    return(a*b);
}