#include<stdio.h>

//extern implementation

extern int z;
int z = 88;

//adrs of a is 5896, adrs of b is 58746566
void changeValues(int a, int b) { //xerox copy -> will not reflect changes
   //call by value
    int c = a; 
    a = b;
    b = c;
}

//adrs of a is 478, adrs of b is 834
void changeReference(int &a, int &b) { //original copy -> will reflect changes
   //call by refrence
    int c = a;
    a = b;
    b = c;
}

int main() {
    //call by value
    auto a = 10;
    auto b = 20; //adrs of a is 478, adrs of b is 834
    printf("call by values::\n");
    printf("a value is: %d\n",a);
    printf("b value is: %d\n",b);
    changeValues(a,b);
    printf("after changeValues()\n");
    printf("a value is: %d\n",a);
    printf("b value is: %d\n",b);

    printf("call by reference::\n");
    printf("a value is: %d\n",a);
    printf("b value is: %d\n",b);
    changeReference(a,b);
    printf("after changeReference()\n");
    printf("a value is: %d\n",a);
    printf("b value is: %d\n",b);
}