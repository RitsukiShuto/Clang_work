// Created by RitsukiShuto on 2019/11/14.
// ��{�v���O���~���O���K ���K4-17
//
#include<stdio.h>

int main(){
    int n;

    puts("��������͂��Ă�������");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        printf("%d��2���%d\n", i, i*i);
    }

    return 0;
}
