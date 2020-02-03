// Created by RitsukiShuto on 2019/11/25.
// 基本プログラミング演習 例題5-2
//
#include <stdio.h>
int main()
{
    int pt[5];
    int sum = 0;
    double avg = 0.0;

    printf("A:");
    scanf("%d", &pt[0]);
    printf("B:");
    scanf("%d", &pt[1]);
    printf("C:");
    scanf("%d", &pt[2]);
    printf("D:");
    scanf("%d", &pt[3]);
    printf("E:");
    scanf("%d", &pt[4]);

    sum = pt[0] + pt[2] + pt[3] + pt[4];
    avg = (double)sum / 5.0;

    printf("total:%d\n", sum);
    printf("avg:%lf", avg);

    return 0;
}