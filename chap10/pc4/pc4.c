// Created by RitsukiShuto on 2019/12/16.
// 基本プログラミング演習10 演習4
//
#include <stdio.h>
void Out_Hello(int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        printf("こんにちは\n");
    }
}

int main()
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    Out_Hello(n);

    return 0;
}