#include<stdio.h>

int main() {
    int a[2][2]; // a[number of rows][number of columns]
    printf("Please provide inputs\n");
    for(int i = 0; i<2; i++ ){
        for(int j = 0; j<2; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    //print 2d array now
    printf("Provided 2d array is:\n");
    for(int i = 0; i<2; i++ ){
        for(int j = 0; j<2; j++) {
            printf("%d", a[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    
}