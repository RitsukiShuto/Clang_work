// Created by RitsukiShuto on 2019/11/06.
// ��{�v���O���~���O���K6 pc49
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int count;
    /* ���� */
    puts("���������");
    scanf("%d", &count);

    /* �J��Ԃ����� */
    for(int i = 1; i <= count; i++){
        if(i % 2 == 0){
            printf("-");
        }else{
            printf("+");
        }
    }

    return 0;
}