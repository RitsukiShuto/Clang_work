// Created by RitsukiShuto on 2019/10/28.
// 基本プログラミング演習 演習B
//
#include<stdio.h>

int main(){
    int num1, num2, num3;
    int buf;

    puts("整数を3つ入力");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d, %d, %d\n", num1, num2, num3);
    if(num1 < num2){
        buf = num1;
        num1 = num2;
        num2 = buf;
    }
    printf("%d, %d, %d\n", num1, num2, num3);
    if(num2 < num3){
        buf = num2;
        num2 = num3;
        num3 = buf;
    }
    printf("%d, %d, %d\n", num1, num2, num3);
    if(num1 < num2){
        buf = num1;
        num1 = num2;
        num2 = buf;
    }

    printf("%d, %d, %d\n", num1, num2, num3);

    return 0;
}