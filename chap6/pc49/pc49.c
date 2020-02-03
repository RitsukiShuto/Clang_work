// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 pc49
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int count;
    /* 入力 */
    puts("整数を入力");
    scanf("%d", &count);

    /* 繰り返し処理 */
    for(int i = 1; i <= count; i++){
        if(i % 2 == 0){
            printf("-");
        }else{
            printf("+");
        }
    }

    return 0;
}