// Created by RitsukiShuto on 2019/11/15
// ��{�v���O���~���O���K ���|�[�g�ۑ�1
// �Ǎ��܂ꂽ�����l�ȉ��ł���Q�ׂ̂�������ɕ\��
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int n;

    /* ���� */
    printf("��������́F");
    scanf("%d", &n);

    /* ���[�v���� */
    for(int i = 2;i <= n;i *= 2){
        printf("%d ", i);
    }

    return 0;
}