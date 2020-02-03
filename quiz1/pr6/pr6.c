// Created by RitsukiShuto on 2019/10/21.
// 基本プログラミング演習 小テスト1 問6
//
#include<stdio.h>
int main(){
    int n, n_box, n_remind;

    n = 1024;
    n_box = n / 5;
    n_remind = n % 5;

    printf("商品%d個を1箱5個入りで分けると", n);
    printf("%d個と余り%d個", n_box, n_remind);

    return 0;
}