// Created by RitsukiShuto on 2019/02/03.
// 基本プログラミング演習 レポート ex1-4
//
#include<stdio.h>
int Calc_Rect(int height, int width){
    int area = height * width;
    return area;
}
int main(){
    int x, y, s;

    printf("タテ:");
    scanf("%d", &y);
    printf("ヨコ:");
    scanf("%d", &x);

    s = Calc_Rect(y, x);

    printf("面積は%d\n", s);
    
    return 0;
}