// Created by RitsukiShuto on 2019/11/06.
// ��{�v���O���~���O���K6 pc4-11
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int num, res, cpy;      // �ŏ��̒l, �o�b�t�@, ����, �R�s�[
    int i = 1000;

    /* ���� */
    printf("4�P�^�̐�������́F");
    scanf("%d", &num);

    cpy = num;

    printf("�t����ǂނ�");
    while (num > 0) {
        printf("%d", num % 10);
        num /= 10;
    }

    return 0;
}