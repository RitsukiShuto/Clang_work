// Created by RitsukiShuto on 2019/10/07.
// 基本プログラミング演習 演習24
//
#include<stdio.h>

int main(){
    int s1, s2, s3, s4, s5, s6, s7;
    int sum, check_sum;

    printf("学籍番号の1ケタ目を入力:");     scanf("%d", &s1);
    printf("学籍番号の2ケタ目を入力:");     scanf("%d", &s2);
    printf("学籍番号の3ケタ目を入力:");     scanf("%d", &s3);
    printf("学籍番号の4ケタ目を入力:");     scanf("%d", &s4);
    printf("学籍番号の5ケタ目を入力:");     scanf("%d", &s5);
    printf("学籍番号の6ケタ目を入力:");     scanf("%d", &s6);
    printf("学籍番号の7ケタ目を入力:");     scanf("%d", &s7);

    sum = s1 + s2 + s3 + s4 + s5 + s6 + s7;
    check_sum = sum % 10;

    printf("学籍番号のチェックサムは%dです。\n", check_sum);

    return 0;
}