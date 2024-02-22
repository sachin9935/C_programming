#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter number x...");
    scanf("%d", &x);
    printf("enter number y...");
    scanf("%d", &y);
    printf("enter number z...");
    scanf("%d", &z);
    if (x > y && x < z)
    {
        printf("x is grater then Y&z...");
    }
    else if (y > x && y > z)
    {
        printf("y is grater then x&z");
    }
    else if (z > x && z > y)
    {
        printf("z is grater then x&y");
    }
    else
    {
        printf("worng mathod...");
    }
}