// Created By RitsukiShuto on 2019/12/07.
// ��{�v���O���~���O���K ���|�[�g2
// ���1 -Q1.c
#include <stdio.h>

int main()
{
    /* �ϐ���錾 */
    int i = 0;                  // ���[�v�J�E���^
    int a[5] = {0, 0, 0, 0, 0}; // �z���������
    int sum = 0;                // ���v�l���i�[
    double avg = 0.0;           // ���ϒl���i�[, ��蕶�ł�ave

    /*  */
    for (i = 0; i < 5; i++)
    {
        printf("input number:");
        scanf("%d", &a[i]); // a��i�Ԓn�Ɋi�[

        sum = sum + a[i]; // sum += a[i]
    }
    avg = (double)sum / 5; // ���ϒl���v�Z
    printf("sum:%d\navg:%.2f\n", sum, avg);

    return 0;
}