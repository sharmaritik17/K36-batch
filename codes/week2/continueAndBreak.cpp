#include <stdio.h>

int main() {
    printf("Inside main fn\n"); // Added '\n' for a new line

    //continue and break scenario

    /* The requirement 
    : A machine owner wants to skip one of the iterations in the process when counter reaches 30
    : A machine owner wants to skip rest of the iterations once counter reaches its limit of 25.
    */
    int counter = 1; // Declaration 

    while (counter < 50) { // Loop until counter reaches 50
        if (counter == 30) {
            counter++; // Increment counter to avoid an infinite loop
            continue;   // Skip the iteration when counter is 30
        }

        printf("Machine iteration %d\n", counter); // Print the iteration number

        // if (counter == 25) {
        //     break;  // Exit the loop when counter reaches 25
        // }

        counter++; // Increment counter for each iteration
    }

    return 0;
}
