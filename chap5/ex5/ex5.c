// Created by RitsukiShuto on 2019/10/28.
// ��{�v���O���~���O���K ���4
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
    
    /* �o�� */
    printf("max_value:%lf\n", max_value);
    printf("min_value:%lf\n", min_value);

    return 0;
}