// Created by RitsukiShuto on 2019/12/16.
// ��{�v���O���~���O���K10 ���K4
//
#include <stdio.h>
void Out_Hello(int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        printf("����ɂ���\n");
    }
}

int main()
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    Out_Hello(n);

    return 0;
}