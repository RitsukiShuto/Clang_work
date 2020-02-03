// Created by RitsukiShuto on 2019/02/03.
// 基本プログラミング演習 レポート ex1-3
//
#include <stdio.h>
void Hello(int n)
{
    for (int i = 0; i < n; i++)
    {
        puts("こんにちは");
    }
}
void main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    Hello(n);
}