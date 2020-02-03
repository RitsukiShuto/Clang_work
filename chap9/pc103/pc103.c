// Created by RitsukiShuto on 2019/12/02.
// 基本プログラミング演習9 --pc10-3.c
//
#include <stdio.h>
#define LEN 14

int main()
{
    char str_a[LEN] = "Yes, We can !";
    char str_b[LEN];

    printf("%s", str_a);
    puts("");

    printf("%s", str_b);
    puts("");

    for (int i = 0; i < LEN; i++)
    {
        str_b[i] = str_a[i];
    }

    printf("%s", str_a);
    puts("");

    printf("%s", str_b);
    puts("");

    return 0;
}