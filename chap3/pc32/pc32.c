// Created by RitsukiShuto on 2019/10/07.
// ��{�v���O���~���O���K ���K32
//
#include<stdio.h>
#include<math.h>

int main(){
    /* �ϐ���錾 */
    double num = 0;

    /* ���� */
    printf("���������:");
    scanf("%lf", &num);
    
    int no = num + 0.5;     // 0.5�����ď����_�ȉ��؂�̂�

    /* �o�� */
    printf("%lf���l�̌ܓ������%d�ł��B\n", num, no);

    return 0;
}