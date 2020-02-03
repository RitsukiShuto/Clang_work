// Created by RitsukiShuto on 2019/11/14.
// 基本プログラミング演習 演習4-13
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int n, sum = 0;

    puts("整数を入力してください");
    scanf("%d", &n);

    /* ループ処理 */
    for(int i = 1;i <= n;i++){
        sum += i;
    }

    printf("1から%dまでの和は%dです\n", n, sum);
    
    return 0;
}