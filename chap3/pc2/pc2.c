// Created by RitsukiShuto on 2019/10/17.
// ��{�v���O���~���O���K3 ���K���2
// ���z���芨�v�Z
//
#include<stdio.h>

int main(){
    /* �ϐ���錾 */
    int sum = 0, people = 0;        // sum -> ���v, peple -> �l��
    int avg = 0;                    // avg -> ���z / �l��
    double fraction = 0;            // fraction -> �[��

    /* ���� */
    printf("���z�F");
    scanf("%d", &sum);
    printf("�l���F");
    scanf("%d", &people);

    /* �v�Z */
    avg = sum / people;
    fraction = sum % people;

    /* �o�� */
    puts("-------------------------------------------------");
    printf("��l������F%d�~\n�[���F%f�~", avg, fraction);

    return 0;
}