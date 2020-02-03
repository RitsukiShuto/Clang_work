// Created by RitsukiShuto on 2019/11/14.
// 基本プログラミング演習 演習4-18
//
#include <stdio.h>

int main()
{
    int n;

    puts("整数を入力してください");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("*");
        if (i / 5 == 1)
        {
            puts("");
        }
    }

    return 0;
}
