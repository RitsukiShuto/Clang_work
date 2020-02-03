// Created by RitsukiShuto on 2019/12/16.
// 基本プログラミング演習10 演習6
//
#include <stdio.h>
#include <math.h>

int Calc_Heron(int Ha, int Hb, int Hc)
{
    double s = (double)(Ha + Hb + Hc) / 2;
    double T1, T2, T3;
    T1 = s - Ha;
    T2 = s - Hb;
    T3 = s - Hc;

    double S = sqrt(s * T1 * T2 * T3);

    return S;
}

int main()
{
    int a, b, c;
    double S;

    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    printf("c:");
    scanf("%d", &c);

    S = Calc_Heron(a, b, c);

    printf("S = %lf\n", S);

    return 0;
}