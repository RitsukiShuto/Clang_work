// Created by RitsukiShuto on 2019/11/14.
// 基本プログラミング演習 演習4-14
//
#include<stdio.h>

int main(){
    int n, counter;

    puts("整数を入力してください");
    scanf("%d", &n);

    counter = 1;

    for(int i = 1;i < n;i++){
        if(counter >= 10){
            counter -= 10;
            printf("%d", counter);
            counter++;
        }
        printf("%d", counter);
        counter++;
    }

    return 0;
}