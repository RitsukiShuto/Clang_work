// Created by RitsukiShuto on 2019/10/28.
// 基本プログラミング演習 演習A
//
#include<stdio.h>

int main(){
    double number;

    puts("実数を入力");
    scanf("%lf", &number);

    number = number + 0.5;

    printf("num:%d\n", (int)number);

    return 0;
}