// Created by RitsukiShuto on 2019/11/06.
// ��{�v���O���~���O���K6 �t�B�{�i�b�`����
//
#include<stdio.h>
#include<math.h>

int main(){
    /* �ϐ���錾 */
    int n, Fn;
    float F, F1, F2;

    /* ��ʍ����` */
    F = (1 / sqrt(5));
    F1 = (1 + sqrt(5) / 2);
    F2 = (1 - sqrt(5) / 2);

    printf("n��");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        Fn = F * (pow(F1, i) - pow(F2, i));
        printf("%d, ", Fn);
    }
    
    printf("\n");

    return 0;
}