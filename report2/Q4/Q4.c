// Created By RitsukiShuto on 2019/12/07.
// 基本プログラミング演習 レポート2
// 問題3 Q3a.c

#include<stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;

    printf("%d\n", a);
    printf("%d\n", *(a + 2));
    printf("%d\n", p + 1);
    printf("%d\n", p + 3);

    return 0;
}