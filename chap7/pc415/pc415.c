// Created by RitsukiShuto on 2019/11/14.
// ��{�v���O���~���O���K ���K4-15
//
#include<stdio.h>

int main(){
    int min, max, interval;     // �ŏ��l, �ő�l, �Ԋu
    float weight;

    /* ���� */
    printf("��cm����F");   scanf("%d", &min);
    printf("��cm�܂ŁF");   scanf("%d", &max);
    printf("�Ԋu�F");       scanf("%d", &interval);

    /* ���[�v���� */
    for(int i = min;i <= max;i += interval){
        weight = (i - 100) * 0.9;
        printf("%d[cm]:%.2f[kg]\n", i, weight);
    }

    return 0;
}