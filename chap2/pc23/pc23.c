// Created by RitsukiShuto on 2019/10/07.
// ��{�v���O���~���O���K ���K23
//
#include<stdio.h>

int main(){
int jp = 0,mt = 0, pg = 0;
int sum = 0;
double avg = 0;

printf("����̓��_:");
scanf("%d", &jp);
printf("���w�̓��_:");
scanf("%d", &mt);
printf("�v���O���~���O�̓��_:");
scanf("%d", &pg);

sum = jp + mt + pg;
avg = sum / 3;

printf("�����_�́A%d�ł��B\n", sum);
printf("���ϓ_�́A%f�ł��B\n", avg);

return 0;
}