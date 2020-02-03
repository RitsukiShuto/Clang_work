// Created by RitsukiShuto on 2019/09/30
// 基本プログラミング演習 printf文
//
#include<stdio.h>
int main(){
    /* 改行 */
    printf("こんにちは!\n");    // "\n"で改行
    printf("お吸い物ボーイズ\n");

    /* 特殊な文字を出力 */
    printf("He said \"Hello\"\n");    // {\"}で　"　を表示

    /* printfの"f" */
    printf("あなたの得点は、%d点です。\n", 60);     // "%d":フォーマット演算子
    printf("試合結果は%d対%dでした。\n", 33, 4);

    return 0;
}