// Created by RitsukiShuto on 2019/11/14.
// ��{�v���O���~���O���K ���K4-18
//
#include<stdio.h>

int main(){
    int n, counter = 0;

    puts("��������͂��Ă�������");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            printf("%d\n", i);
            counter++;
        }
    }
    
    printf("%d�̖񐔂�%d����܂��B\n", n, counter);

    return 0;
}