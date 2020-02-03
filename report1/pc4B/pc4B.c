// Created by RitsukiShuto on 2019/11/15
// 基本プログラミング演習 レポート課題1
// n個の３の倍数を全て小さい順に表示(nはキーボード入力)
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int n;

    /* 入力 */
    printf("整数を入力：");
    scanf("%d", &n);

    /* ループ処理 */
    for(int i = 1;i <= n;i++){
        printf("%d ", i * 3);
    }

    return 0;
}