// Created by RitsukiShuto on 2019/10/07.
// ��{�v���O���~���O���K ���K24
//
#include<stdio.h>

int main(){
    int s1, s2, s3, s4, s5, s6, s7;
    int sum, check_sum;

    printf("�w�Дԍ���1�P�^�ڂ����:");     scanf("%d", &s1);
    printf("�w�Дԍ���2�P�^�ڂ����:");     scanf("%d", &s2);
    printf("�w�Дԍ���3�P�^�ڂ����:");     scanf("%d", &s3);
    printf("�w�Дԍ���4�P�^�ڂ����:");     scanf("%d", &s4);
    printf("�w�Дԍ���5�P�^�ڂ����:");     scanf("%d", &s5);
    printf("�w�Дԍ���6�P�^�ڂ����:");     scanf("%d", &s6);
    printf("�w�Дԍ���7�P�^�ڂ����:");     scanf("%d", &s7);

    sum = s1 + s2 + s3 + s4 + s5 + s6 + s7;
    check_sum = sum % 10;

    printf("�w�Дԍ��̃`�F�b�N�T����%d�ł��B\n", check_sum);

    return 0;
}