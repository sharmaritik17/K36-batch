#include<stdio.h>

void printArray(int arr[]) {
    for (int i = 0; i < 5; i++) {
        printf("\n");
        printf("%d",arr[i]);
    }
}
//array as a pointer
void changeArrayValues(int arr[]) {
    arr[0] = 1000;
    arr[1] = 2000;
}

int main() {
    int arr[5];
    int a[] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("\n");
        printf("%d",arr[i]);
    }
    printf("size of the array %d", sizeof(arr));
    //sizeof calculates based of sizeOfDataType * sizeOfArray

    for (int i = 0; i < 5; i++) {
        printf("\n");
        printf("%d %d %d %d %d %d",i, a[i], i[a],*(a+i), &a[i], *&a[i]);
    }
    printArray(a);
    printf("call is being made to changeArrayValues\n");
    changeArrayValues(a);
    printf("call is completed to changeArrayValues\n");
    printArray(a);
    // printf("%d", 3[a]);
}