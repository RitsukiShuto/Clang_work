// Created by RitsukiShuto on 2019/10/07.
// ��{�v���O���~���O���K ���K1
// �����`�̖ʐς����߂ďo��
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int a = 0;      // width
    int b = 0;      // height

    /* ��������� */
    printf("���R�F");
    scanf("%d", &a);
    printf("�^�e�F");
    scanf("%d", &b);

    /* �o�� */
    printf("���R%d,�^�e%d�̖ʐς�%d�ł��B\n", a, b, a * b);

    return 0;
}