#include<stdio.h>
#include <stdlib.h>

struct Person {
    char name[20];
    int age;
    float height;
};

int main() {
    struct Person *person1;
    person1 = (struct Person *)malloc(sizeof(struct Person));

    if(person1 == NULL) {
        printf("Hey!, There's some error in creating person1\n");
        return 1;
    }

    printf("Please provide person1's name\n");
    scanf("%s\n", person1->name);

    printf("Please provide person1's age\n");
    scanf("%d\n", &(person1->age));

    printf("Please provide person1's height\n");
    scanf("%f\n", &(person1->height));


    printf("person1's name : %s\n", person1->name);
    printf("person1's age : %d\n", person1->age);
    printf("person1's height : %f\n", person1->height);
}