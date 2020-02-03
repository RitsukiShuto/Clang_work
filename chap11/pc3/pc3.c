// Created by RitsukiShuto on 2020/02/20.
// 基本プログラミング演習 演習3
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

    printf("ヨコ:");
    scanf("%d", &width);
    printf("タテ:");
    scanf("%d", &height);

    area = Calc_Rect(width, height);
    printf("ヨコ%d, タテ%dの面積は%d\n", width, height, area);

    return 0;
}