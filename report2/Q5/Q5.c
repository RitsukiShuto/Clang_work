// Created By RitsukiShuto on 2019/12/07.
// ��{�v���O���~���O���K ���|�[�g2
// ���5 Q5.c

#include <stdio.h>

int main()
{
    /* �ϐ���錾 */
    int pt[3][5] = {{62, 76, 84, 92, 85},
                    {80, 70, 60, 70, 80},
                    {90, 80, 78, 88, 96}};
    int sum = 0;
    double ave;
    int max = 0, min = 100;

    /* �ȉ��� */
    /* ���v���v�Z */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += pt[i][j];

            /* �ő�, �ŏ����v�Z */
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

    /* ���ʂ��o�� */
    printf("summation = %d, average = %.2f\n", sum, ave);
    printf("max = %d, min = %d\n", max, min);
    return 0;
}