// Created by RitsukiShuto on 2020/02/20.
// 基本プログラミング演習 演習10-1
//
#include <stdio.h>

void adjust_point(int *n)
{
    int num = *n;
    if (num >= 100)
    {
        num = 100;
        printf("%d\n", *n);
        printf("%d\n", num);
    }
    else if (num <= 0)
    {
        num = 0;
        printf("%d\n", *n);
        printf("%d\n", num);
    }
    else
    {
        printf("%d\n", *n);
        printf("%d\n", num);
    }
}

int main()
{
    int n = 121;
    adjust_point(&n);

    return 0;
}