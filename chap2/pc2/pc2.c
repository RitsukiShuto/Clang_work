// Created by RitsukiShuto on 2019/10/07.
// ��{�v���O���~���O���K ���K2
// 2���̏��Ƃ��܂���o��
//
#include<stdio.h>

int main(){
    int a = 0;
    int b = 0;

    printf("a�F");
    scanf("%d", &a);
    printf("b�F");
    scanf("%d", &b);

    printf("a �� b��%d���܂�%d�ł��B\n", a / b, a % b);

    return 0;
}