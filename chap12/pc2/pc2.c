// Created by RitsukiShuto on 2019/01/27.
// 基本プログラミング演習 演習2 pc2.c
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
    puts("各メンバに入力");
    printf("名  前:");
    fgets(p->name, NAME_LEN, stdin);
    printf("身  長:");
    scanf("%d", &p->height);
    printf("体  重:");
    scanf("%f", &p->weight);
    printf("奨学金:");
    scanf("%ld", &p->schols);
}
void Output_Menber(Student profile)
{
    puts("---出力---");
    printf("氏  名 = %s", profile.name);
    printf("身  長 = %d\n", profile.height);
    printf("体  重 = %.lf\n", profile.weight);
    printf("奨学金 = %ld\n", profile.schols);
}

int main()
{
    Student profile = {0};
    Input_Member(&profile);
    Hiroko(&profile);
    Output_Menber(profile);

    return 0;
}