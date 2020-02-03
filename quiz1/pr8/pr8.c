// Created by RitsukiShuto on 2019/10/21.
// 基本プログラミング演習 小テスト1 問8
//
#include<stdio.h>
int main(){
    int s1 = 80, s2 = 91, s3 = 88;
    double s_avg;

    // s_avg = (s1 + s2 + s3) / 3;          // ここが間違い!
    s_avg = (double)(s1 + s2 + s3) / 3;     // s1, s2, s3の和をdouble型にキャスト変換

    printf("%d, %d, %dの", s1, s2, s3);
    printf("平均値は%f\n", s_avg);

    return 0;
}