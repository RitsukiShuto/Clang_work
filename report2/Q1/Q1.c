// Created By RitsukiShuto on 2019/12/07.
// 基本プログラミング演習 レポート2
// 問題1 -Q1.c
#include <stdio.h>

int main()
{
    /* 変数を宣言 */
    int i = 0;                  // ループカウンタ
    int a[5] = {0, 0, 0, 0, 0}; // 配列を初期化
    int sum = 0;                // 合計値を格納
    double avg = 0.0;           // 平均値を格納, 問題文ではave

    /*  */
    for (i = 0; i < 5; i++)
    {
        printf("input number:");
        scanf("%d", &a[i]); // aのi番地に格納

        sum = sum + a[i]; // sum += a[i]
    }
    avg = (double)sum / 5; // 平均値を計算
    printf("sum:%d\navg:%.2f\n", sum, avg);

    return 0;
}