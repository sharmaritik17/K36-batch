#include <stdio.h>

int main() {
    printf("Inside Main\n");

    // switch(expression) {
    //     case 'constant_expression' :
    //     break;
    //     case 'constant_expression' :
    //     break;
    //     default :
    //     printf("this is default statement");
    // }

    // PROBLEM : there will be 1 to 7 numbers and then, you need to provide day corresponding to it.
    // Example : 1 : "Monday", 7 : "Sunday"

    int day;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Sorry!, Day must be in 1 to 7 range only");
        break;
    }
}
