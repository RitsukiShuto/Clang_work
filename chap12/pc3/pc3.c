// Created by RitsukiShuto on 2019/01/27.
// ��{�v���O���~���O���K ���K3 pc3.c
//
#include <stdio.h>

typedef struct xyz
{
    int x;
    long y;
    float z;
} xyz;

void Scan_xyz(xyz *p)
{
    puts("xyz�ɂ��ē���");
    printf("x:");
    scanf("%d", &p->x);
    printf("y:");
    scanf("%ld", &p->y);
    printf("z:");
    scanf("%f", &p->z);
}
void Output_xyz(xyz q)
{
    puts("\nxyz�ɂ��ďo��");
    printf("(x, y, z) = (%d, %ld, %f)\n", q.x, q.y, q.z);
}

int main()
{
    xyz q = {0};
    Scan_xyz(&q);
    Output_xyz(q);

    return 0;
}