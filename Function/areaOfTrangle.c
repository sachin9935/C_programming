#include <stdio.h>
#include <math.h>

float triangleArea(float a, float b, float c) {
    float s = (a + b + c) / 2;
    // Calculate the area using Heron's formula
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    float side1, side2, side3;

    // Input lengths of all three sides of the triangle
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the given sides form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Calculate and display the area of the triangle
        float area = triangleArea(side1, side2, side3);
        printf("Area of the triangle is: %.2f\n", area);
    } else {
        // If the sides do not form a valid triangle
        printf("Invalid triangle: The sum of any two sides must be greater than the third side.\n");
    }

    return 0;
}
