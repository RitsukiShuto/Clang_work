// Created By RitsukiShuto on 2019/12/07.
// 基本プログラミング演習 レポート2
// 問題3 Q3b.c

#include<stdio.h>
#define NUMBER1 3 + 4
#define NUMBER2 (3 + 4)

int main(){
    int a = NUMBER1 * 5;
    int b = NUMBER2 * 5;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}