// Created by RitsukiShuto on 2019/02/03.
// 基本プログラミング演習 レポート ex1-6
//
#include <stdio.h>
void Adjust_Point(int *n)
{
    if (*n >= 100)
    {
        *n = 100;
    }
    else if (*n <= 0)
    {
        *n = 0;
    }
    else
    {
    }
    printf("num = %d", *n);
}
int main()
{
    int num;

    printf("num:");
    scanf("%d", &num);

    Adjust_Point(&num);

    return 0;
}