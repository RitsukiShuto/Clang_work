// Created by RitsukiShuto on 2019/11/14.
// ��{�v���O���~���O���K ���K4-16
//
#include<stdio.h>

int main(){
    int n;

    puts("��������͂��Ă�������");
    scanf("%d", &n);

    if(n /2 != 1){
        n -= 1;
    }

    for(int i = n;i > 0;i-=2){
        printf("%d\n", i);
    }

    return 0;
}