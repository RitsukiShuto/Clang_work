// Created by RitsukiShuto on 2019/12/16.
// ��{�v���O���~���O���K10 ���K5
//
#include <stdio.h>

int Calc_Area(int Height, int Width)
{
    int AREA = Height * Width;

    return AREA;
}

int main()
{
    int width, height, area;

    printf("�^�e:");
    scanf("%d", &height);
    printf("���R:");
    scanf("%d", &width);

    area = Calc_Area(height, width);

    printf("area = %d\n", area);

    return 0;
}
