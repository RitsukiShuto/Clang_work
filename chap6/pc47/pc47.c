// Created by RitsukiShuto on 2019/11/06.
// ��{�v���O���~���O���K6 pc47
//
#include<stdio.h>
#include<math.h>

int main(){
    int i = 2, j = 1, no;

    printf("��������́F");
    scanf("%d", &no);

    while(i <= no){
        j ++;
        printf("%d\n", i);
        i = pow(2, j);
    }

    return 0;
}