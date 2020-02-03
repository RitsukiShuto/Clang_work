// Created by RitsukiShuto on 2019/11/14.
// 基本プログラミング演習 演習4-15
//
#include<stdio.h>

int main(){
    int min, max, interval;     // 最小値, 最大値, 間隔
    float weight;

    /* 入力 */
    printf("何cmから：");   scanf("%d", &min);
    printf("何cmまで：");   scanf("%d", &max);
    printf("間隔：");       scanf("%d", &interval);

    /* ループ処理 */
    for(int i = min;i <= max;i += interval){
        weight = (i - 100) * 0.9;
        printf("%d[cm]:%.2f[kg]\n", i, weight);
    }

    return 0;
}