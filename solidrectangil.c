#include <stdio.h>
int main()
{
    int x,y;
    printf("enter number or rows...");
    scanf("%d", &y);
    printf("enter number of collumn..");
    scanf("%d", &x);
    for (int i = 1; i <= y; i++)//outer loop ->no. of lines
    {
        for (int j = 1; j <= x; j++)//iner loop ->no. of stare
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}