// Created By RitsukiShuto on 2019/12/07.
// 基本プログラミング演習 レポート2
// 問題2b -Q2b.c

#include <stdio.h>

int main()
{
    int ev[8], od[8] = {0}; // 偶数, 奇数

    /* bの答え */
    for (int i = 0; i < 8; i++){
        ev[i] = i * 2;
        od[i] = (i * 2) + 1;
    }

    for (int i = 0; i < 8; i++)
        printf("ev[%d]:%d | od[%d]:%d\n", i, ev[i], i, od[i]);

    return 0;
}