// Created by RitsukiShuto on 2019/11/15
// ��{�v���O���~���O���K ���|�[�g�ۑ�1
// n�ȉ��̂R�̔{����S�ĕ\��(n�̓L�[�{�[�h����)
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

    printf("%d\n", sum);
    
    return 0;
}