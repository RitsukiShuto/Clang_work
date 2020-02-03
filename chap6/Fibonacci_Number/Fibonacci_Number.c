// Created by RitsukiShuto on 2019/11/06.
// 基本プログラミング演習6 フィボナッチ数列
//
#include<stdio.h>
#include<math.h>

int main(){
    /* 変数を宣言 */
    int n, Fn;
    float F, F1, F2;

    /* 一般項を定義 */
    F = (1 / sqrt(5));
    F1 = (1 + sqrt(5) / 2);
    F2 = (1 - sqrt(5) / 2);

    printf("n項");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        Fn = F * (pow(F1, i) - pow(F2, i));
        printf("%d, ", Fn);
    }
    
    printf("\n");

    return 0;
}