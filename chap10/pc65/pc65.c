// Created by RitsukiShuto on 2019/12/16.
// 基本プログラミング演習10 演習6-2
//
#include <stdio.h>

int Sigma(int n)
{
    int sigma = 0;

    for (int i = 1; i <= n; i++)
    {
        sigma += i;
    }

    return sigma;
}

int main()
{
    int n, sum;

    printf("n = ");
    scanf("%d", &n);

    sum = Sigma(n);

    printf("sum = %d\n", sum);

    return 0;
}