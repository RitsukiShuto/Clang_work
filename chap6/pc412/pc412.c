// Created by RitsukiShuto on 2019/11/06.
// ��{�v���O���~���O���K6 pc4-12
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int num, count = 0;      // �ŏ��̒l, �J�E���^
    int i = 1000;

    /* ���� */
    printf("4�P�^�̐�������́F");
    scanf("%d", &num);

    while (num > 0) {
        count++;
        num /= 10;
    }

    printf("������%d\n", count);

    return 0;
}