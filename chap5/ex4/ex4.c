// Created by RitsukiShuto on 2019/10/28.
// ��{�v���O���~���O���K ���4
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int number;

    /* ���� */
    puts("���������:");
    scanf("%d", &number);

    /* ���� */
    switch(number % 3){
        case 0:
            puts("0");
            break;

        case 1:
            puts("1");
            break;

        case 2:
            puts("2");
            break;

        default:
            puts("Invalid Value");
    }

    return 0;
}