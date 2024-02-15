#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum_of_odds = 0, sum_of_evens = 0;
    while (n > 0) { // 5542
        int remainder = n%10; // 2
        int next_n = n/10; //554

        if(remainder%2 == 0) { //true
            sum_of_evens += remainder; //2
        }
        else {
            sum_of_odds += remainder;
        }

        n = next_n;
    }
    
    printf("%d", sum_of_evens);
    printf(" ");
    printf("%d", sum_of_odds);
}