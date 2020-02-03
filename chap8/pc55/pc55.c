// Created by RitsukiShuto on 2019/11/25.
// 基本プログラミング演習 例題5-2
//
#include <stdio.h>
int main()
{
    int array[256];
    int n, sum = 0, avg = 0;

    printf("n:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("array[%d]:", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    avg = (double)sum / n;

    printf("SUM:%d\nAVG:%d", sum, avg);

    return 0;
}