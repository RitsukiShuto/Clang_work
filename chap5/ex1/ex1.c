// Created by RitsukiShuto on 2019/10/28.
// ��{�v���O���~���O���K ���1
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int number;

    /* ��������� */
    puts("��������͂��Ă��������F");
    scanf("%d", &number);

    /* ���� */
    if(number % 2 != 0){
        printf("%d�͋����ł��B\n", number);
    }
    
    return 0;
}