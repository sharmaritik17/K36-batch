#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2;

    // Allocate memory for 5 integers using malloc
    ptr1 = (int *)malloc(5 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Allocate memory for 3 integers using calloc
    ptr2 = (int *)calloc(3, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        free(ptr1); // Free the previously allocated memory
        return 1;
    }

    // Change the size of the previously allocated memory using realloc
    ptr1 = (int *)realloc(ptr1, 8 * sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory reallocation failed\n");
        free(ptr2); // Free the memory allocated by calloc
        return 1;
    }

    // Free the allocated memory
    free(ptr1);
    free(ptr2);

    printf("Memory allocation and deallocation successful\n");

    return 0;
}
