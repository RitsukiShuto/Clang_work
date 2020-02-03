// Created by RitsukiShuto on 2019/10/07.
// 基本プログラミング演習 演習2
// 2数の商とあまりを出力
//
#include<stdio.h>

int main(){
    int a = 0;
    int b = 0;

    printf("a：");
    scanf("%d", &a);
    printf("b：");
    scanf("%d", &b);

    printf("a ÷ bは%dあまり%dです。\n", a / b, a % b);

    return 0;
}