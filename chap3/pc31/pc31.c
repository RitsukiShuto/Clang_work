// Created by RitsukiShuto on 2019/10/07.
// ��{�v���O���~���O���K ���K���1
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    double PI = 3.141592;
    int pi;

    /* �L���X�g�ϊ� */
    pi = (int) PI;        // 
    /* �������Ō��Z���ď��������쐬 */
    PI -= pi;       // (PI)3.14 - (pi)3

    /* �o�� */
    printf("������:%d\n������:%lf\n", pi, PI);

    return 0;
}