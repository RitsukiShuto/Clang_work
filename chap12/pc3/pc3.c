// Created by RitsukiShuto on 2019/01/27.
// 基本プログラミング演習 演習3 pc3.c
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
    puts("xyzについて入力");
    printf("x:");
    scanf("%d", &p->x);
    printf("y:");
    scanf("%ld", &p->y);
    printf("z:");
    scanf("%f", &p->z);
}
void Output_xyz(xyz q)
{
    puts("\nxyzについて出力");
    printf("(x, y, z) = (%d, %ld, %f)\n", q.x, q.y, q.z);
}

int main()
{
    xyz q = {0};
    Scan_xyz(&q);
    Output_xyz(q);

    return 0;
}