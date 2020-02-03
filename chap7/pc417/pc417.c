// Created by RitsukiShuto on 2019/11/14.
// 基本プログラミング演習 演習4-17
//
#include<stdio.h>

int main(){
    int n;

    puts("整数を入力してください");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        printf("%dの2乗は%d\n", i, i*i);
    }

    return 0;
}
