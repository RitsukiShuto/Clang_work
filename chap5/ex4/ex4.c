// Created by RitsukiShuto on 2019/10/28.
// 基本プログラミング演習 例題4
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int number;

    /* 入力 */
    puts("整数を入力:");
    scanf("%d", &number);

    /* 判定 */
    switch(number % 3){
        case 0:
            puts("0");
            break;

        case 1:
            puts("1");
            break;

        case 2:
            puts("2");
            break;

        default:
            puts("Invalid Value");
    }

    return 0;
}