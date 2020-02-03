// Created by RitsukiShuto on 2019/10/07.
// 基本プログラミング演習 演習1
// 長方形の面積を求めて出力
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int a = 0;      // width
    int b = 0;      // height

    /* 長さを入力 */
    printf("ヨコ：");
    scanf("%d", &a);
    printf("タテ：");
    scanf("%d", &b);

    /* 出力 */
    printf("ヨコ%d,タテ%dの面積は%dです。\n", a, b, a * b);

    return 0;
}