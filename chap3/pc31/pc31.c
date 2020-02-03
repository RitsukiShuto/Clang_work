// Created by RitsukiShuto on 2019/10/07.
// 基本プログラミング演習 演習問題1
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    double PI = 3.141592;
    int pi;

    /* キャスト変換 */
    pi = (int) PI;        // 
    /* 整数部で減算して少数部を作成 */
    PI -= pi;       // (PI)3.14 - (pi)3

    /* 出力 */
    printf("整数部:%d\n少数部:%lf\n", pi, PI);

    return 0;
}