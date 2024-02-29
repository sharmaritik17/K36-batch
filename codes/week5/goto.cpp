#include <stdio.h>

int main() {
    int num;
input:
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num <= 0) {
        printf("Invalid input! Please enter a positive number.\n");
        goto input; // Jump to the 'input' label to ask the user for input again
    }
    goto success_label;

success_label:
    printf("Outside If statement\n");

    printf("You entered: %d\n", num);

    return 0;
}