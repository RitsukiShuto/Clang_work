// Created by RitsukiShuto on 2019/11/14.
// 基本プログラミング演習 演習4-22
//
#include<stdio.h>

int main(){
    /* 変数を宣言 */
    int n1, n2;     // 値1--ヨコ, 値2--

    printf("n1:");  scanf("%d", &n1);
    printf("n2:");  scanf("%d", &n2);

    /* 大小関係を比較 */
    if(n1 < n2){        // n2の方が大きければ入れ替え
        int buf = n1;
        n1 = n2;
        n2 = buf;
    }

    /* ループ処理 */
    for(int i = 0;i < n2;i++){
        for(int j =0;j < n1;j++){       // ヨコを出力
            putchar('*');
        }
        puts("");
    }

    return 0;
}