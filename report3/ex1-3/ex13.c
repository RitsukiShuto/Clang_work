// Created by RitsukiShuto on 2019/02/03.
// ��{�v���O���~���O���K ���|�[�g ex1-3
//
#include <stdio.h>
void Hello(int n)
{
    for (int i = 0; i < n; i++)
    {
        puts("����ɂ���");
    }
}
void main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    Hello(n);
}