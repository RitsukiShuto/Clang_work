// Created by RitsukiShuto on 2019/12/16.
// Šî–{ƒvƒƒOƒ‰ƒ~ƒ“ƒO‰‰K ‰‰K1
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

    printf("‰~‚Ì”¼Œa:");
    scanf("%d", &r);

    s = sample(r);

    printf("S = %lf\n", s);

    return 0;
}