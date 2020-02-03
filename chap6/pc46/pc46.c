// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 pc46
//
#include<stdio.h>

int main(){
    int i = 2, no;

    printf("整数を入力：");
    scanf("%d", &no);

    while(i <= no){
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}