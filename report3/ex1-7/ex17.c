// Created by RitsukiShuto on 2019/02/03.
// 基本プログラミング演習 レポート ex1-7
//
#include <stdio.h>
#define LEN 5
int data[LEN] = {0};

void Toukei(int *max, int *min, int *sum, int *average)
{
    /* sumを計算 */
    for (int i = 0; i < LEN; i++)
    {
        *sum += data[i];
    }
    *average = *sum / LEN;
    /* max, minを検索 */
    int buf;
    for (int j = 0; j < LEN; j++)
    {
        for (int k = 0 + j; k < LEN; k++)
        {
            if (data[j] < data[k])
            {
                buf = data[j];
                data[j] = data[k];
                data[k] = buf;
            }
        }
    }
    *max = data[0];
    *min = data[LEN - 1];
}

int main()
{
    int max = 0, min = 0, sum = 0, average = 0;
    puts("Input data");
    for (int i = 0; i < LEN; i++)
    {
        printf("data[%d]", i);
        scanf("%d", &data[i]);
    }

    Toukei(&max, &min, &sum, &average);

    printf("sum = %d\naverage = %d\nmax = %d\nmin = %d\n", sum, average, max, min);

    return 0;
}