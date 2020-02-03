// Created by RitsukiShuto on 2019/10/28.
// 基本プログラミング演習 例題1
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int number;

    /* 整数を入力 */
    puts("整数を入力してください：");
    scanf("%d", &number);

    /* 判定 */
    if(number % 2 != 0){
        printf("%dは偶数です。\n", number);
    }
    
    return 0;
}