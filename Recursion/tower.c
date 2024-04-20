
#include <stdio.h>

void tower(int n, char source, char helper, char destination) {
    if (n == 0) return; // Base case to terminate recursion
    
    tower(n - 1, source, destination, helper);
    printf("%c -> %c\n", source, destination);
    tower(n - 1, helper, source, destination);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
    return 0;
}

