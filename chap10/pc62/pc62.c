// Created by RitsukiShuto on 2019/12/16.
// 基本プログラミング演習10 演習6-2
//
#include <stdio.h>

int Get_Min(int N1, int N2, int N3)
{
    int min;

    if (N1 < N2 && N1 < N3)
    {
        min = N1;
    }
    else if (N2 < N1 && N2 < N3)
    {
        min = N2;
    }
    else
    {
        min = N3;
    }

    return min;
}

int main()
{
    int n1, n2, n3;
    int min;

    printf("n1:");
    scanf("%d", &n1);
    printf("n2:");
    scanf("%d", &n2);
    printf("n3:");
    scanf("%d", &n3);

    min = Get_Min(n1, n2, n3);

    printf("MIN = %d\n", min);

    return 0;
}