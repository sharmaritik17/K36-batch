#include<stdio.h>

int main() {
    printf("Inside Main\n");

    printf("ARITHMETIC OPERATORS\n");

    int a = 10, b = 30;
    int output = a + b;
    printf("Addition: %d\n", output);

    a = 5, b = 3;
    output = a % b;
    printf("Modulus: %d\n", output);

    printf("Post Increment: %d\n", a++);
    printf("Pre Increment: %d\n", ++b);

    a = 5, b = 3;
    printf("Post Decrement: %d\n", a--);
    printf("Pre Decrement: %d\n", --b);

    a = 5, b = 3;
    printf("RELATIONAL OPERATORS\n");
    printf("Equals: %d\n", a == b); //if they are equal then we get 1 otherwise 0
    printf("Greater than: %d\n", a > b);

    printf("LOGICAL OPERATORS\n");
    bool flag1 = 1, flag2 = 0;
    printf("Logical AND\n");
    if(flag1 == 1 && flag2 == 1) {//if(flag1 && flag2) 
        printf("both flag1 and flag2 are true");
    }

    printf("Logical OR\n");
    if(flag1 == 1 || flag2 == 0) {//if(flag1 || flag2) 
        printf("either flag1, flag2 or both are true");
    }

    printf("BITWISE OPERATORS\n");
    a = 10, b = 10;
    output = a & b;
    printf("Bitwise AND: %d\n",output);

    a = 10, b= 5;
    output = a | b;
    printf("Bitwise OR: %d\n",output);

    a = 15, b = 15;
    output = a ^ b;
    printf("Bitwise XOR: %d\n", output);

    a = 1;
    output =  ~a;
    printf("complement of a: %d\n", ~0);

    a = 4;
    printf("left shift: %d\n", a << 2);

    a = 16;
    printf("right shift: %d\n", a >> 2);
}