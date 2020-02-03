// Created by RitsukiShuto on 2019/11/14.
// 基本プログラミング演習 演習4-16
//
#include<stdio.h>

int main(){
    int n;

    puts("整数を入力してください");
    scanf("%d", &n);

    if(n /2 != 1){
        n -= 1;
    }

    for(int i = n;i > 0;i-=2){
        printf("%d\n", i);
    }

    return 0;
}