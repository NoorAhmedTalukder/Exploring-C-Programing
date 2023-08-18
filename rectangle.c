#include <stdio.h>

int main()
{
    int a, b;
    int area;

    printf("enter the value of side 1:");
    scanf("%d", &a);
    printf("enter the value of side 2:");

    scanf("%d", &b);

    area = a * b;

    printf("The Area of rectangle is:%d", area);
}