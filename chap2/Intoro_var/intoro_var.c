// Created by RitsukiShuto on 2019/10/07.
// Intoro_var.c
//
#include<stdio.h>

int main(){
	/* 変数を宣言 */
	int a = 1;		// 初期化
	int b;

	printf("最初のaの値は、%dです。\n", a);

	a = 2;
	printf("aの値は更新されて%dです。\n", a);

	a = a + 1;		// a += 1でも可
	printf("aの値は1足されて%dです。\n", a);

	b = a;		//a ==> b
	printf("bの値はaが代入されて%dです。\n", b);

	return 0;
}