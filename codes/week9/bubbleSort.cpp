#include<stdio.h>

void printArray(int arr[]) {
    for (int i = 0; i < 5; i++) {
        printf("\n");
        printf("%d",arr[i]);
    }
}

int main() {
    int a[] = {4,4,8,2,5};
    int n = 5;
    //[2]
    for (int i = 0; i < n - 1; i++) { //0<1
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("the output array is::\n");
    printArray(a);
}