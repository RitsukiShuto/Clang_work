// Created by RitsukiShuto on 2019/01/27.
// ��{�v���O���~���O���K ���K1 pc1.c
//
#include<stdio.h>

#define NAME_LEN 64

struct student{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

int main(){
    struct student takao = {"Takao", 173, 86.2};

    printf("��  �� = %s\n",   takao.name);
    printf("�g  �� = %d\n",   takao.height);
    printf("��  �d - %.lf\n", takao.weight);
    printf("���w�� = %ld\n",  takao.schols);

    printf("��  �� = %o\n",   &takao.name);
    printf("�g  �� = %o\n",   &takao.height);
    printf("��  �d - %o\n", &takao.weight);
    printf("���w�� = %o\n",  &takao.schols);
    return 0;
}