// Created by RitsukiShuto on 2019/10/07.
// 基本プログラミング演習 演習32
//
#include<stdio.h>
#include<math.h>

int main(){
    /* 変数を宣言 */
    double num = 0;

    /* 入力 */
    printf("実数を入力:");
    scanf("%lf", &num);
    
    int no = num + 0.5;     // 0.5足して小数点以下切り捨て

    /* 出力 */
    printf("%lfを四捨五入すると%dです。\n", num, no);

    return 0;
}