// Created by RitsukiShuto on 2019/01/27.
// ��{�v���O���~���O���K ���2-point ex2.c
//
#include <stdio.h>

struct point
{          // �\���̂̐錾
    int x; // �����o
    int y; // �����o
};

int main()
{
    struct point p = {1, 3}; // �\���̂̕ϐ���錾
    struct point q;

    printf("point p = (%d, %d)\n", p.x, p.y);
    p.x = 5;
    p.y = 7;

    printf("point p = (%d, %d)\n", p.x, p.y);
    q = p; // ���g�����̂܂܃R�s�[

    printf("point q = (%d, %d)\n", p.x, p.y);

    return 0;
}
