#include<stdio.h>

int main() {
    // int amount; //declaration -> compiler will assign any garbage value


    // int amount = 10; //defining ==> declare -> define/assign/
    printf("Inside main fn\n"); // Added '\n' for a new line

    //continue and break scenario

    /* The requirement 
    : A machine owner wants to skip one of the iterations in the process when counter reaches 30
    : A machine owner wants to skip rest of the iterations once counter reaches its limit of 25.
    */
    int counter = 1;
    while(counter < 50) { //1<50 30<50
        // if(counter == 30) { //1 == 30
        //     counter++;
        //     continue;
        // }

        if(counter == 25) {
            break;
        }

        printf("Machine Iteration %d\n", counter);
        
        counter++; //1++ ==> 2
    }
    printf("I'm here on line 30");
    return 0;
}