// Created by RitsukiShuto on 2020/02/20.
// ��{�v���O���~���O���K ���K2
//
#include <stdio.h>

int Hello(int n)
{
    for (int i = 0; i < n; i++)
    {
        puts("Hello!!");
    }
    return 0;
}

int main()
{
    int n;

    printf("�񐔂����(n):");
    scanf("%d", &n);

    Hello(n);

    return 0;
}