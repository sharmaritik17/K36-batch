#include <stdio.h>
#include <conio.h>

// getch() -> not acknowledgement (conio)
// getche() -> echo immediately (conio)
// getchar() -> take the char
// putchar() -> prints char
// gets() -> gets string
// puts() -> prints string
// putch() -> prints char (conio)

int main() {
    char ch;

    printf("Enter a character using getchar(): ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    printf("\n");

    printf("Enter a character using getche() (echo immediately): ");
    ch = getche();
    printf("\nYou entered: ");
    putchar(ch);
    printf("\n");

    printf("Enter a character using getch() (no echo): ");
    ch = getch();
    printf("\nYou entered: ");
    putchar(ch);
    printf("\n");

    printf("Enter a string using gets(): ");
    char str[100];
    gets(str);
    printf("You entered: ");
    puts(str);

    printf("Enter a character using putch(): ");
    ch = getchar();
    printf("You entered: ");
    putch(ch);
    printf("\n");

    return 0;
}
