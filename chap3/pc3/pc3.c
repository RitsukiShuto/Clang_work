// Created by RitsukiShuto on 2019/10/17.
// ��{�v���O���~���O���K ���K���3
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int dollar = 0;
    double rate = 0;

    /* ���� */
    printf("�h��:");
    scanf("%d", &dollar);
    printf("���[�g:");
    scanf("%lf", &rate);

    /* �v�Z */
    double yen = dollar * rate;

    /* �o�� */
    printf("%d�h����%lf�~�ł�", dollar, yen);

    return 0;
}