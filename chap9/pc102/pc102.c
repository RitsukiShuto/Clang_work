// Created by RitsukiShuto on 2019/12/02.
// 基本プログラミング演習9 --ex10-2
//
#include <stdio.h>

int main()
{
    int a[5] = {0};
    int *p, *q;

    p = a;
    printf("p:%d\n", p);

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]:%d\n", i, *(p + 1) = i);
    }
    printf("*p:%d\n", &a[4]);

    q = p;
    printf("q:%d\n", q);
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]:%d\n", i, q[i] = a[i] * 2 + 1);
    }
}