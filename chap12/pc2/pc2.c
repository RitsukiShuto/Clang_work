// Created by RitsukiShuto on 2019/01/27.
// ��{�v���O���~���O���K ���K2 pc2.c
//
#include <stdio.h>

#define NAME_LEN 64

typedef struct student
{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void Hiroko(Student *std)
{
    if (std->height < 180)
        std->height = 180;
    if (std->weight > 80)
        std->weight = 80;
}
void Input_Member(Student *p)
{
    puts("�e�����o�ɓ���");
    printf("��  �O:");
    fgets(p->name, NAME_LEN, stdin);
    printf("�g  ��:");
    scanf("%d", &p->height);
    printf("��  �d:");
    scanf("%f", &p->weight);
    printf("���w��:");
    scanf("%ld", &p->schols);
}
void Output_Menber(Student profile)
{
    puts("---�o��---");
    printf("��  �� = %s", profile.name);
    printf("�g  �� = %d\n", profile.height);
    printf("��  �d = %.lf\n", profile.weight);
    printf("���w�� = %ld\n", profile.schols);
}

int main()
{
    Student profile = {0};
    Input_Member(&profile);
    Hiroko(&profile);
    Output_Menber(profile);

    return 0;
}