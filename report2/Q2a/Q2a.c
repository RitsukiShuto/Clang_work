// Created By RitsukiShuto on 2019/12/07.
// 基本プログラミング演習 レポート2
// 問題2a -Q2a.c

#include <stdio.h>

int main()
{
    int c[] = {1, 2, 3, 5, 8, 13, 21, 34};
    int d[8];

    /* aの答え */
    for (int i = 0; i < 8; i++)
    {
        d[7 - i] = c[i];
    }
    for (int i = 0; i < 8; i++)
    {
        printf("c[%d]:%d\td[%d]:%d\n", i, c[i], i, d[i]);
    }

    return 0;
}