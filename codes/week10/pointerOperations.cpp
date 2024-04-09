#include<stdio.h>


int main() {
    int a = 10;
    int *p = &a;

    printf("%d size of p\n", sizeof(p));

    int arr[5]{1,2,3,400,5};
    printf("%d arr base address\n",&arr);
    printf("%d currently p is having\n",p);
    printf("%d p has it's own address--\n", &p);

    int b = 20;
    p = &b;
    printf("After b coming in picture\n");
    printf("%d currently p is having\n",p);
    printf("%d p has it's own address--\n",&p);

    // pointer arithmetic
    int *p1 = &arr[1];
    int *p2 = &arr[4];
    printf("distance btw two indexes, p2-p1 : %d\n", p2-p1);

    if(p2 != p1) {
        printf("p2 != p1\n");
    } else {
        printf("p2 == p1\n");
    }

    p1 = p1 + 10; // p1 + 2*4 //

    printf("p1 = p1 + 2 : %d\n", *p1);
}