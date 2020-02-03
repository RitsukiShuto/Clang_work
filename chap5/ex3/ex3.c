// Created by RitsukiShuto on 2019/10/28.
// 基本プログラミング演習 例題3
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int number;

    /* 整数を入力 */
    puts("整数を入力してください：");
    scanf("%d", &number);

    /* 判定 */
    if(number == 0){
        printf("0が入力されました。\n");

    }else if(number > 0){
        printf("%dは正です。\n", number);

    }else{
        printf("%dは負です。\n", number);

    }

    return 0;
}