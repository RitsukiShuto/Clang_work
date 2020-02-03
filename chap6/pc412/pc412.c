// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 pc4-12
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int num, count = 0;      // 最初の値, カウンタ
    int i = 1000;

    /* 入力 */
    printf("4ケタの整数を入力：");
    scanf("%d", &num);

    while (num > 0) {
        count++;
        num /= 10;
    }

    printf("桁数は%d\n", count);

    return 0;
}