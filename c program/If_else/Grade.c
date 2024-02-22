#include <stdio.h>
int main()
{
    int marks;
    printf("enter student marks...");
    scanf("%d", &marks);
    if (marks > 91 && marks < 100)
    {
        printf("excellent");
    }
    else if (marks > 81 && marks < 90)
    {
        printf("very good...");
    }
    else if (marks > 71 && marks < 80)
    {
        printf(" good...");
    }
    else if (marks > 60 && marks < 70)
    {
        printf("Average...");
    }
    else
    {
        printf("fail...");
    }
}