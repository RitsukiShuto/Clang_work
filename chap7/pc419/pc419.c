// Created by RitsukiShuto on 2019/11/14.
// 基本プログラミング演習 演習4-18
//
#include<stdio.h>

int main(){
    int n, counter = 0;

    puts("整数を入力してください");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            printf("%d\n", i);
            counter++;
        }
    }
    
    printf("%dの約数は%d個あります。\n", n, counter);

    return 0;
}