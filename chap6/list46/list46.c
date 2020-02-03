// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 List4-6
//
#include<stdio.h>

int main(){
    int no;

    printf("整数を入力：");
    scanf("%d", &no);

    while(no-- >= 0){
        putchar('*');
    }
    putchar('\n');

    return 0;
}