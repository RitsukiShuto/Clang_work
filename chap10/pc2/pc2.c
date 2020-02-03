// Created by RitsukiShuto on 2019/12/16.
// 基本プログラミング演習10 演習2
//
#include <stdio.h>

int Calc_Avg(N1, N2, N3)
{
    double AVG = (double)(N1 + N2 + N3) / 3;

    return AVG;
}

int main()
{
    int n1, n2, n3;
    double avg;

    printf("n1:");
    scanf("%d", &n1);
    printf("n2:");
    scanf("%d", &n2);
    printf("n3:");
    scanf("%d", &n3);

    avg = Calc_Avg(n1, n2, n3);

    printf("avg = %lf\n", avg);

    return 0;
}