// Created by RitsukiShuto on 2019/11/14.
// ��{�v���O���~���O���K ���K4-13
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int n, sum = 0;

    puts("��������͂��Ă�������");
    scanf("%d", &n);

    /* ���[�v���� */
    for(int i = 1;i <= n;i++){
        sum += i;
    }

    printf("1����%d�܂ł̘a��%d�ł�\n", n, sum);
    
    return 0;
}