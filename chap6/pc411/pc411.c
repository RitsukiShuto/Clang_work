// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 pc4-11
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int num, res, cpy;      // 最初の値, バッファ, 結果, コピー
    int i = 1000;

    /* 入力 */
    printf("4ケタの整数を入力：");
    scanf("%d", &num);

    cpy = num;

    printf("逆から読むと");
    while (num > 0) {
        printf("%d", num % 10);
        num /= 10;
    }

    return 0;
}