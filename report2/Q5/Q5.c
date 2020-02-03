// Created By RitsukiShuto on 2019/12/07.
// 基本プログラミング演習 レポート2
// 問題5 Q5.c

#include <stdio.h>

int main()
{
    /* 変数を宣言 */
    int pt[3][5] = {{62, 76, 84, 92, 85},
                    {80, 70, 60, 70, 80},
                    {90, 80, 78, 88, 96}};
    int sum = 0;
    double ave;
    int max = 0, min = 100;

    /* 以下解答 */
    /* 合計を計算 */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += pt[i][j];

            /* 最大, 最小を計算 */
            if (max < pt[i][j])
            {
                max = pt[i][j];
            }
            if (min > pt[i][j])
            {
                min = pt[i][j];
            }
        }
    }
    ave = sum / 15;

    /* 結果を出力 */
    printf("summation = %d, average = %.2f\n", sum, ave);
    printf("max = %d, min = %d\n", max, min);
    return 0;
}