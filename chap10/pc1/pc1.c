// Created by RitsukiShuto on 2019/12/16.
// ��{�v���O���~���O���K ���K1
//
#include <stdio.h>

int sample(int r)
{
    double d;
    d = r * r * 3.14;

    return d;
}

int main()
{
    int r;
    double s;

    printf("�~�̔��a:");
    scanf("%d", &r);

    s = sample(r);

    printf("S = %lf\n", s);

    return 0;
}