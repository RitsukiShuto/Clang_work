// Created by RitsukiShuto on 2019/11/15
// ��{�v���O���~���O���K ���|�[�g�ۑ�1
// n�̂R�̔{����S�ď��������ɕ\��(n�̓L�[�{�[�h����)
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int n;

    /* ���� */
    printf("��������́F");
    scanf("%d", &n);

    /* ���[�v���� */
    for(int i = 1;i <= n;i++){
        printf("%d ", i * 3);
    }

    return 0;
}