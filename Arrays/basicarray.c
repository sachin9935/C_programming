#include <stdio.h>
int main()
{
    int arr3[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter the element number %d\n", i + 1);
        scanf("%d", &arr3[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d,", arr3[i]);
    }
    return 0;
}