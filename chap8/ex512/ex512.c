// Created by RitsukiShuto on 2019/11/25.
// 基本プログラミング演習 例題5-12
//
#include <stdio.h>

int main()
{
    int sc1[5] = {50, 60, 70, 80, 90};
    int sc2[5] = {33, 48, 70, 29, 80};
    int sc3[5] = {80, 69, 73, 59, 95};

    int score[3][5];
    int sum = 0;
    double avg = 0.0;

    for (int j = 0; j < 5; j++)
    {
        score[0][j] = sc1[j];
    }
    for (int j = 0; j < 5; j++)
    {
        score[0][j] = sc2[j];
    }
    for (int j = 0; j < 5; j++)
    {
        score[0][j] = sc3[j];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += score[i][j];
        }
    }

    avg = (double)sum / 15;
    printf("total\navg\n:%lf \n%lf\n", sum, avg);

    return 0;
}
