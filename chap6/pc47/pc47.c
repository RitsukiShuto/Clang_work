// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 pc47
//
#include<stdio.h>
#include<math.h>

int main(){
    int i = 2, j = 1, no;

    printf("整数を入力：");
    scanf("%d", &no);

    while(i <= no){
        j ++;
        printf("%d\n", i);
        i = pow(2, j);
    }

    return 0;
}