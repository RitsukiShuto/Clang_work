// Created by RitsukiShuto on 2019/10/17.
// 基本プログラミング演習3 演習問題2
// 金額割り勘計算
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int sum = 0, people = 0;        // sum -> 合計, peple -> 人数
    int avg = 0;                    // avg -> 金額 / 人数
    double fraction = 0;            // fraction -> 端数

    /* 入力 */
    printf("総額：");
    scanf("%d", &sum);
    printf("人数：");
    scanf("%d", &people);

    /* 計算 */
    avg = sum / people;
    fraction = sum % people;

    /* 出力 */
    puts("-------------------------------------------------");
    printf("一人あたり：%d円\n端数：%f円", avg, fraction);

    return 0;
}