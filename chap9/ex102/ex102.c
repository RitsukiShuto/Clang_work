// Created by RitsukiShuto on 2019/12/02.
// 基本プログラミング演習9 --ex10-2
//
#include <stdio.h>

int main()
{
    /* 変数を宣言 */
    int arr[3];
    double arr_x[3] = {1.414, 2.718, 3.141};

    for (int i = 0; i < 3; i++)
    {
        printf(
            "a[%d]:\t%d\nbytes, address:%d\n",
            i, sizeof(arr[i]), (int)(&arr[i]));
    }

    for (int i = 0; i < 3; i++)
    {
        printf(
            "a[%d]:\t%d\nbytes, address:%d\n",
            i, sizeof(arr_x[i]), (int)(&arr_x[i]));
    }

    return 0;
}