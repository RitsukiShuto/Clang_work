// Created by RitsukiShuto on 2019/11/14.
// ��{�v���O���~���O���K ���K4-22
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int n1, n2;     // �l1--���R, �l2--

    printf("n1:");  scanf("%d", &n1);
    printf("n2:");  scanf("%d", &n2);

    /* �召�֌W���r */
    if(n1 < n2){        // n2�̕����傫����Γ���ւ�
        int buf = n1;
        n1 = n2;
        n2 = buf;
    }

    /* ���[�v���� */
    for(int i = 0;i < n2;i++){
        for(int j =0;j < n1;j++){       // ���R���o��
            putchar('*');
        }
        puts("");
    }

    return 0;
}