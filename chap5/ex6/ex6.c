// Created by RitsukiShuto on 2019/10/28.
// ��{�v���O���~���O���K ���6
// �O�����Z�q
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    double num_a, num_b;
    double max_value, min_value;

    /* ��������� */
    printf("num_a:");
    scanf("%lf", &num_a);

    printf("num_b:");
    scanf("%lf", &num_b);

    /* �O�����Z�q�Ŕ��� */
    max_value = num_a > num_b ? num_a : num_b;
    min_value = num_a < num_b ? num_a : num_b;

    /* ��Βl���v�Z */
    int abs = max_value - min_value;
    
    /* �o�� */
    printf("abs:%d\n", abs);

    return 0;
}