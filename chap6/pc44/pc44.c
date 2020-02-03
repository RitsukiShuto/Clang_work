// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 演習4－4
// ある値を入力すると、その値から１までカウントダウン
//
#include<stdio.h>
int main(){
    /* 変数を宣言 */
    int number;

    /* 入力 */
    puts("整数を入力");
    scanf("%d", &number);

    while(number >= 0){
        printf("%d\n", number);
        number --;
    }

    return 0;
}