// Created by RitsukiShuto on 2019/10/07.
// Intoro_var.c
//
#include<stdio.h>

int main(){
	/* �ϐ���錾 */
	int a = 1;		// ������
	int b;

	printf("�ŏ���a�̒l�́A%d�ł��B\n", a);

	a = 2;
	printf("a�̒l�͍X�V�����%d�ł��B\n", a);

	a = a + 1;		// a += 1�ł���
	printf("a�̒l��1�������%d�ł��B\n", a);

	b = a;		//a ==> b
	printf("b�̒l��a����������%d�ł��B\n", b);

	return 0;
}