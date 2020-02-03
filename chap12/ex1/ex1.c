// Created by RitsukiShuto on 2019/01/27.
// 基本プログラミング演習 例題1-number ex1.c
//
#include <stdio.h>
#include <string.h>
int main()
{
    int id[3] = {101, 103, 102};
    char name[3][8] = {"AAAAAAAA", "CCCCCCCC", "BBBBBBBB"};
    int test[3] = {80, 75, 90};

    /* 入れ替える前の状態を表示 */
    printf("Before correction\n");
    for (int i = 0; i < 3; i++)
    {
        printf("id[%d], %s, %d pt. \n", id[i], name[i], test[i]);
    }

    /* 入れ替え */
    char str_tmp;
    for (int i = 0; i < 8; i++)
    {
        str_tmp = name[1][i];
        name[1][i] = name[2][i];
        name[2][i] = str_tmp;
    }

    int buf = id[1];
    id[1] = id[2];
    id[2] = buf;

    buf = test[1];
    test[1] = test[2];
    test[2] = buf;

    /* 入れ替え後 */
    printf("After correction\n");
    for (int i = 0; i < 3; i++)
    {
        printf("id[%d], %s, %d pt. \n", id[i], name[i], test[i]);
    }

    return 0;
}