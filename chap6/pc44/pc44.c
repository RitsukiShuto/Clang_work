// Created by RitsukiShuto on 2019/11/06.
// ��{�v���O���~���O���K6 ���K4�|4
// ����l����͂���ƁA���̒l����P�܂ŃJ�E���g�_�E��
//
#include<stdio.h>
int main(){
    /* �ϐ���錾 */
    int number;

    /* ���� */
    puts("���������");
    scanf("%d", &number);

    while(number >= 0){
        printf("%d\n", number);
        number --;
    }

    return 0;
}