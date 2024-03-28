#include<stdio.h>

int main() {
    int a = 10;
    int *p1 = &a;

    printf("%d\n", &a);
    printf("%d\n", p1);
    printf("%d\n",*p1);
    printf("%d\n",&p1);

    int &b = a; //refrence, alias, not net new vairable => rather it's a reference to your 'a' variable
    printf("%d\n", b);
    printf("%d\n", &b);
    printf("%d\n", &a);

}