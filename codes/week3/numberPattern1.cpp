#include<stdio.h>

int main() {
    int n;
    printf("Enter value of N:\n");
    scanf("%d", &n);

    for(int row = 1; row <= n; row++) { //this is representation of row numbers
       int indiviual_row_starting_value = row;
       for(int col = 1; col <= row; col++, indiviual_row_starting_value++) {// this is representation of col numbers
          printf("%d", indiviual_row_starting_value);
          // indiviual_row_starting_value++;
       }
       printf("\n");
    }
}