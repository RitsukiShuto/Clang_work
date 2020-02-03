// Created by RitsukiShuto on 2019/01/27.
// 基本プログラミング演習 例題2-point ex2.c
//
#include <stdio.h>

struct point
{          // 構造体の宣言
    int x; // メンバ
    int y; // メンバ
};

int main()
{
    struct point p = {1, 3}; // 構造体の変数を宣言
    struct point q;

    printf("point p = (%d, %d)\n", p.x, p.y);
    p.x = 5;
    p.y = 7;

    printf("point p = (%d, %d)\n", p.x, p.y);
    q = p; // 中身をそのままコピー

    printf("point q = (%d, %d)\n", p.x, p.y);

    return 0;
}
