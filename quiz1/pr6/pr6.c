// Created by RitsukiShuto on 2019/10/21.
// ��{�v���O���~���O���K ���e�X�g1 ��6
//
#include<stdio.h>
int main(){
    int n, n_box, n_remind;

    n = 1024;
    n_box = n / 5;
    n_remind = n % 5;

    printf("���i%d��1��5����ŕ������", n);
    printf("%d�Ɨ]��%d��", n_box, n_remind);

    return 0;
}