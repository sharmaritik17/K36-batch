#include<stdio.h>

int main() {
    int n=5;
    // printf("Enter value of N:\n");
    // scanf("%d", &n);

    for(int row = 1; row <= n; row++) { //this is representation of row numbers
       int indiviual_row_starting_value = n - row + 1;
       for(int col = 1; col <= row; col++, indiviual_row_starting_value++) {// this is representation of col numbers
          printf("%c", indiviual_row_starting_value + 64);
          // indiviual_row_starting_value++;
       }
       printf("\n");
    }
}