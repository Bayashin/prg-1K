//
//  main.c
//  11_challenge1_k21099
//
//  Created by k21099kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i=0,j=0,mojicount=0,tanngocount=1;
    char array[] = "we hold these truths to be self-evident, that all men are created equal, that they are endowed by their creator with certain unalienable rights, that among these are life, liberty and the pursuit of happiness.";
    char ch[100];
    
    printf("検索対象 : ");scanf("%s",ch);
    
    for (i=0; ch[i] !='\0'; i++) {
       mojicount++;
    }
    
    for (i=0; i<sizeof(array)/sizeof(array[0]); ) {
        if (ch[0]==array[i]) {
            int flag=1;
            for (j=1; j<mojicount; j++) {
                if (array[i+j]!=ch[j]) {
                    flag=0;
                    break;
                }
            }
            if (flag==1) {
                if (array[i+j]==','||array[i+j]=='.'||array[i+j]==' ') {
                    printf("%d\n",tanngocount);
                }
            }
        }
        
        if (array[i]!=',' && array[i]!='.' && array[i]!=' ') {
            tanngocount++;
        }
       
        for (; (i<sizeof(array)/sizeof(array[0])) && array[i]!=','&& array[i]!='.'&& array[i]!=' '; i++) {
            
        }
        i++;
    }
    return 0;
}
       
    
