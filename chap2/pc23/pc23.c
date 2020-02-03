// Created by RitsukiShuto on 2019/10/07.
// 基本プログラミング演習 演習23
//
#include<stdio.h>

int main(){
int jp = 0,mt = 0, pg = 0;
int sum = 0;
double avg = 0;

printf("国語の得点:");
scanf("%d", &jp);
printf("数学の得点:");
scanf("%d", &mt);
printf("プログラミングの得点:");
scanf("%d", &pg);

sum = jp + mt + pg;
avg = sum / 3;

printf("総得点は、%dです。\n", sum);
printf("平均点は、%fです。\n", avg);

return 0;
}