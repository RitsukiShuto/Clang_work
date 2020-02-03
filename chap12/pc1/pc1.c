// Created by RitsukiShuto on 2019/01/27.
// 基本プログラミング演習 演習1 pc1.c
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

    printf("氏  名 = %s\n",   takao.name);
    printf("身  長 = %d\n",   takao.height);
    printf("体  重 - %.lf\n", takao.weight);
    printf("奨学金 = %ld\n",  takao.schols);

    printf("氏  名 = %o\n",   &takao.name);
    printf("身  長 = %o\n",   &takao.height);
    printf("体  重 - %o\n", &takao.weight);
    printf("奨学金 = %o\n",  &takao.schols);
    return 0;
}