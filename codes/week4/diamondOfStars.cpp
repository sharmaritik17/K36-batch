#include<stdio.h>

int main() {
    printf("Inside Main\n");
    int n;
    printf("Enter the value of N:, please provide odd values only\n");
    scanf("%d", &n);

    int n1 = (int)n/2 + 1;
    int r1 = 1;
    // let's print upper traingle
    while(r1 <= n1) {
        //spaces
        int spaces = 1;
        while(spaces <= n1 - r1) {
            printf(" ");
            spaces++;
        }
        //stars
        int stars = 1;
        while(stars <= 2*r1 - 1) {
            printf("*");
            stars++;
        }
        printf("\n");
        r1++;
    }

    //lower traingle
    int n2 = n/2;
    int r2 = n2;
    while(r2 > 0) {
        //spaces
        int spaces = 1;
        while(spaces <= n2 - r2 + 1) {
            printf(" ");
            spaces++;
        }
        //stars;
        int stars = 1;
        while(stars <= 2*r2 - 1) {
            printf("*");
            stars++;
        }
        printf("\n");
        r2--;
    }
}