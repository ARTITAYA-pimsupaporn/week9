#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//  74. รับค่าตัวเลข 2 จำนวน เก็บใน x และ y ตามลำดับ จากนั้นให้ทำการสลับค่ากัน โดยห้ามสร้างตัวแปรเพิ่ม(Level 5)
using namespace std;
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(x, y);
    printf("%d %d", x, y);
    return 0;
}