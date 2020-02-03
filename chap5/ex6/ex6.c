// Created by RitsukiShuto on 2019/10/28.
// 基本プログラミング演習 例題6
// 三項演算子
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    double num_a, num_b;
    double max_value, min_value;

    /* 整数を入力 */
    printf("num_a:");
    scanf("%lf", &num_a);

    printf("num_b:");
    scanf("%lf", &num_b);

    /* 三項演算子で判定 */
    max_value = num_a > num_b ? num_a : num_b;
    min_value = num_a < num_b ? num_a : num_b;

    /* 絶対値を計算 */
    int abs = max_value - min_value;
    
    /* 出力 */
    printf("abs:%d\n", abs);

    return 0;
}