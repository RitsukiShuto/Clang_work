// Created by RitsukiShuto on 2019/11/14.
// ��{�v���O���~���O���K ���K4-18
//
#include <stdio.h>

int main()
{
    int n;

    puts("��������͂��Ă�������");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("*");
        if (i / 5 == 1)
        {
            puts("");
        }
    }

    return 0;
}
