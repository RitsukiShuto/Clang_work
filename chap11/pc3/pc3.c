// Created by RitsukiShuto on 2020/02/20.
// ��{�v���O���~���O���K ���K3
//
#include <stdio.h>

int Calc_Rect(int width, int height)
{
    int area = width * height;
    return area;
}

int main()
{
    int width, height, area;

    printf("���R:");
    scanf("%d", &width);
    printf("�^�e:");
    scanf("%d", &height);

    area = Calc_Rect(width, height);
    printf("���R%d, �^�e%d�̖ʐς�%d\n", width, height, area);

    return 0;
}