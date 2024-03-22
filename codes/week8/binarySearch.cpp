#include<stdio.h>


int main() {
    int a[6] = {1,2,3,4,5,6};

    int n = 6, target = 8;
    int start = 0, end = n-1;
    bool foundTarget = 0;
    while(start<=end) {
        // int mid = (start + end)/2; 
        int mid = (end - start)/2 + start;

        if(a[mid] == target) {
            foundTarget = 1;
            break;
        }
        else if(a[mid] < target) { //
            start = mid+1;
        }
        else { //a[mid] > target
            end = mid-1;
        }
    }

    if(foundTarget == 1) {
        printf("Found target\n");
    }
    else{
        printf("Not found target\n");
    }
}