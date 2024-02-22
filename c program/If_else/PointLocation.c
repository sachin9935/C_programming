#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinates...");
    scanf("%d%d", &x, &y);
    if (y == 0 && x == 0)
    {
        printf("the point is origan...");
    }
    else if (x == 0)
    {
        printf("lise on y-axis...");
    }
    else if (y == 0)
    {
        printf("lies on x-axis..");
    }
    else
    {
        printf("yhe point does not lie on x or y..");
    }
}