// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 演習4-5
//
#include<stdio.h>

int main(){
    int i = 1, no;

    printf("整数を入力：");
    scanf("%d", &no);

    while(i <= no){
        printf("%d\n", i);
        i ++;
    }
    return 0;
}