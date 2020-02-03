// Created by RitsukiShuto on 2019/12/16.
// 基本プログラミング演習10 演習5
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

    printf("タテ:");
    scanf("%d", &height);
    printf("ヨコ:");
    scanf("%d", &width);

    area = Calc_Area(height, width);

    printf("area = %d\n", area);

    return 0;
}
