//
//  main.c
//  prog01
//
//  Created by k21099kk on 2021/11/25.
//

#include <stdio.h>

struct student{
    char name[64];
    int age;
    char number[64];
    int grade;
};

int main(int argc, const char * argv[]) {
    
    struct student a1={"hayashi",19,"k21099",1},a2={"tanaka",23,"b10543",32},a3={"katou",18,"x22065",2};
    
    printf("名前；%s ,年齢；%d, 学籍番号；%s, 学年；%d\n",a1.name,a1.age,a1.number,a1.grade);
    printf("名前；%s ,年齢；%d, 学籍番号；%s, 学年；%d\n",a2.name,a2.age,a2.number,a2.grade);
    printf("名前；%s ,年齢；%d, 学籍番号；%s, 学年；%d\n",a3.name,a3.age,a3.number,a3.grade);
    
    return 0;
}
