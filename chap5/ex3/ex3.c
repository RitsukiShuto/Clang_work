// Created by RitsukiShuto on 2019/10/28.
// ��{�v���O���~���O���K ���3
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int number;

    /* ��������� */
    puts("��������͂��Ă��������F");
    scanf("%d", &number);

    /* ���� */
    if(number == 0){
        printf("0�����͂���܂����B\n");

    }else if(number > 0){
        printf("%d�͐��ł��B\n", number);

    }else{
        printf("%d�͕��ł��B\n", number);

    }

    return 0;
}