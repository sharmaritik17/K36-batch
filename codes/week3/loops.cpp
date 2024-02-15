#include<stdio.h>

int main() {
    int n = 10, i = 0;
    //while loop below

    while(i < 10) {
        printf("Iteration number in while loop is: %d\n", i);
        i++;
    }

    //for loop below

    for(int a = 0; a < n; a++) {
        printf("Iteration number in for loop is: %d\n", a);
    }

    //do-while
    
    i = 0;
    do {
        printf("Iteration number in do-while loop is: %d\n", i);
        i++;
    }
    while(i < 0);

}