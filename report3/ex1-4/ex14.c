// Created by RitsukiShuto on 2019/02/03.
// ��{�v���O���~���O���K ���|�[�g ex1-4
//
#include<stdio.h>
int Calc_Rect(int height, int width){
    int area = height * width;
    return area;
}
int main(){
    int x, y, s;

    printf("�^�e:");
    scanf("%d", &y);
    printf("���R:");
    scanf("%d", &x);

    s = Calc_Rect(y, x);

    printf("�ʐς�%d\n", s);
    
    return 0;
}