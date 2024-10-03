#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    
                                             
    ptr = (int *)malloc(3 * sizeof(int));    // Allocating memory for 3 integers
    // if (ptr == NULL) { 
    //     printf("Memory allocation failed\n");
    //     return 1;
    // }

    // Loop to input values into the allocated memory
    for (int i = 0; i < 3; i++) {                          // Corrected the loop condition
        printf("Enter the value no %d of this array: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Loop to print values from the array
    for (int i = 0; i < 3; i++) {                                  // Corrected the loop condition
        printf("The value at index %d of this array is: %d\n", i, ptr[i]);
    }

    // Free the dynamically allocated memory
    free(ptr);
    
    return 0;


   

}
