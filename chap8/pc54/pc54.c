// Created by RitsukiShuto on 2019/11/25.
// 基本プログラミング演習 例題5-2
//
#include <stdio.h>
int main()
{
    double array[] = {0.5, 1.6, 2.7, 3.8, 4.9};
    double sum = 0.0;
    double avg = 0.0;

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]:", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    avg = sum / 5.0;

    printf("total:%lf\n", sum);
    printf("avg:%lf", avg);

    return 0;
}