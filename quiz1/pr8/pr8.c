// Created by RitsukiShuto on 2019/10/21.
// ��{�v���O���~���O���K ���e�X�g1 ��8
//
#include<stdio.h>
int main(){
    int s1 = 80, s2 = 91, s3 = 88;
    double s_avg;

    // s_avg = (s1 + s2 + s3) / 3;          // �������ԈႢ!
    s_avg = (double)(s1 + s2 + s3) / 3;     // s1, s2, s3�̘a��double�^�ɃL���X�g�ϊ�

    printf("%d, %d, %d��", s1, s2, s3);
    printf("���ϒl��%f\n", s_avg);

    return 0;
}