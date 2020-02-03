// Created by RitsukiShuto on 2019/12/02.
// 基本プログラミング演習9 --ex10-2
//
#include <stdio.h>

int main()
{
    int a = 0, b = 1;
    int *p, *q;

    p = &a;
    q = &b;

    printf("%d\n", *p);
    *p = 2;
    printf("%d\n", a);
    q = p;
    *q = 3;
    printf("%d, %d\n", a, b);

    return 0;
}