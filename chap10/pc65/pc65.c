// Created by RitsukiShuto on 2019/12/16.
// ��{�v���O���~���O���K10 ���K6-2
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