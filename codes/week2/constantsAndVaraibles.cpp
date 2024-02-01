#include <stdio.h>
#include <math.h>
// #define INT_MIN (-INT_MAX - 1)

int main() {
    printf("Inside Main\n");

    const int amount = 100;
    printf("%d\n",amount);

    const char charConstant = 'z';
    printf("%c\n",charConstant);

    const float floatConst = 1.12;
    printf("%f\n",floatConst);

    int amountVariable = 45;
    printf("%d\n",amountVariable);

    char charVariable = 'w';
    printf("%c\n",charConstant);

    float floatVariable = 100.100;
    printf("%f\n",floatConst);

    printf("I want below output to be shown in char format only\n");
    printf("%c\n", amount);

    printf("Below is the minimum value that an integer can hold\n");
    printf("%d\n", INT_MIN);
    printf("Below is the maximum value that an integer can hold\n");
    printf("%d\n", INT_MAX);

    int value = 2147483648;
    printf("%d\n", value);
}