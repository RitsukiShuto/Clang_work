// Created by RitsukiShuto on 2019/12/02.
// 基本プログラミング演習9 --ex10-1
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int a;      // 初期化されていないので中身は不定
    double x = 1.4;

    printf("a = %d, address = %p\n", a, &a);        // &hoge ==> アドレス
    printf("x = %2f, address = %p\n", x, &x);       //

    return 0;
}