#include<stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    char str[5] = "abcd"; //5th index '\0'

    printf("%d\n", arr);
    printf("%s", str); 
    printf("\n");

    printf("%c\n",str[0]);

    printf(&str[1]);
    printf("\n");
    printf("%d\n", &arr[1]);

    printf("NULL CHAR : %c\n ",str[4]);
}