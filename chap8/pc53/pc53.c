// Created by RitsukiShuto on 2019/11/25.
// 基本プログラミング演習 例題5-2
//
#include <stdio.h>
int main()
{
    int pt[5];
    int sum = 0;
    double avg = 0.0;

    for (int i = 0; i < 5; i++)
    {
        printf("%d人目:", i + 1);
        scanf("%d", &pt[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += pt[i];
    }

    avg = (double)sum / 5.0;

    printf("total:%d\n", sum);
    printf("avg:%lf", avg);

    return 0;
}