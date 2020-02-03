// Created by RitsukiShuto on 2019/11/15
// 基本プログラミング演習 レポート課題1
// 読込まれた整数値以下である２のべき乗を順に表示
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int n;

    /* 入力 */
    printf("整数を入力：");
    scanf("%d", &n);

    /* ループ処理 */
    for(int i = 2;i <= n;i *= 2){
        printf("%d ", i);
    }

    return 0;
}