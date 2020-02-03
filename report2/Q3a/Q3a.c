// Created By RitsukiShuto on 2019/12/07.
// 基本プログラミング演習 レポート2
// 問題3 Q3a.c

#include<stdio.h>

int main(){
    char s[16] = "HELLO, WORLD !!";

    putchar(s[0]);
    putchar(s[8]);
    putchar(s[3]);

    char *p = s;
    putchar(p[11]);
    putchar(p[13]);

    return 0;
}