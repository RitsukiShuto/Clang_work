// Created by RitsukiShuto on 2019/11/25.
// ��{�v���O���~���O���K ���5-2
//
#include <stdio.h>
#define ARR_SIZE 7

int main()
{
    int array1[7] = {1, 2, 3, 4, 5, 6, 7},
        array2[7] = {0};

    /* �z����o�� */
    puts("a\tb");
    puts("-----------");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d\t%d\n", array1[i], array2[i]);
    }

    /* �z����R�s�[ */
    for (int i = 0; i < ARR_SIZE; i++)
    {
        array2[i] = array1[6 - i];
    }

    /* �z����o�� */
    puts("a\tb");
    puts("-----------");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d\t%d\n", array1[i], array2[i]);
    }

    return 0;
}
