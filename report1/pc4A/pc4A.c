// Created by RitsukiShuto on 2019/11/15
// ��{�v���O���~���O���K ���|�[�g�ۑ�1
// n�ȉ��̂R�̔{����S�ĕ\��(n�̓L�[�{�[�h����)
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int n;

    /* ���� */
    printf("��������́F");
    scanf("%d", &n);

    /* ���[�v���� */
    for(int i = 3;i <= n;i += 3){
        printf("%d ", i);
    }

    return 0;
}