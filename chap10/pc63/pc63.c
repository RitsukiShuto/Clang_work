// Created by RitsukiShuto on 2019/12/16.
// ��{�v���O���~���O���K10 ���K6-3
//
#include <stdio.h>

int Get_Cube(int num)
{
    int culc_num = 1;
    for (int i = 0; i < num; i++)
    {
        culc_num *= num;
    }

    return culc_num;
}

int main()
{
    int num, pow3;

    printf("num = ");
    scanf("%d", &num);

    pow3 = Get_Cube(num);

    printf("cube = %d\n", pow3);

    return 0;
}