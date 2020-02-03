// Created by RitsukiShuto on 2020/02/20.
// Šî–{ƒvƒƒOƒ‰ƒ~ƒ“ƒO‰‰K ‰‰Kex-1
//
#include <stdio.h>
#define LEN 5

int data[LEN] = {0};

void toukei(int *max, int *min, int *sum, int *average)
{
    /* sum‚ğŒvZ */
    for (int i = 0; i < LEN; i++)
    {
        *sum += data[i];
    }
    /* avg‚ğŒvZ */
    *average = (int)*sum / LEN;

    /* min, max‚ğŒŸõ */
    int buf;
    for (int j = 0; j < LEN; j++)
    {
        for (int k = j + 1; k < LEN; k++)
        {
            if (data[j] < data[k])
            {
                buf = data[k];
                data[k] = data[j];
                data[j] = buf;
            }
        }
    }
    *max = data[0];
    *min = data[LEN - 1];
}

int main()
{
    int max = 0, min = 0, sum = 0, average = 0;

    for (int i = 0; i < LEN; i++)
    {
        printf("data[%d] = ", i);
        scanf("%d", &data[i]);
    }

    toukei(&max, &min, &sum, &average);

    printf("sum = %d\n", sum);
    printf("avg = %d\n", average);
    printf("max = %d\n", max);
    printf("min = %d\n", min);

    return 0;
}