// Created by RitsukiShuto on 2019/10/17.
// 基本プログラミング演習 演習問題3
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int dollar = 0;
    double rate = 0;

    /* 入力 */
    printf("ドル:");
    scanf("%d", &dollar);
    printf("レート:");
    scanf("%lf", &rate);

    /* 計算 */
    double yen = dollar * rate;

    /* 出力 */
    printf("%dドルは%lf円です", dollar, yen);

    return 0;
}