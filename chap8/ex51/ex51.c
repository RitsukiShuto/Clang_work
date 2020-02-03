// Created by RitsukiShuto on 2019/11/25.
// 基本プログラミング演習 例題5-1
//
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    int sum = 0;
    double avg = 0.0;

    printf("A:");
    scanf("%d", &a);
    printf("B:");
    scanf("%d", &b);
    printf("C:");
    scanf("%d", &c);
    printf("D:");
    scanf("%d", &d);
    printf("E:");
    scanf("%d", &e);

    sum = a + b + c + d + e;
    avg = (double)sum / 5.0;

    printf("total:%d\n", sum);
    printf("averave:%d\n", avg);

    return 0;
}