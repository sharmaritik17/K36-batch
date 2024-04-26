#include <stdio.h>
#include <string.h>

// Define a structure named 'Person'
struct Person {
    char name[20];
    int age;
};

// Define a union named 'Data'
union Data {
    int num; //4
    float score; //4
};

int main() {
    // Declare a variable of type 'Person'
    struct Person person1;

    // Declare a variable of type 'Data'
    union Data data1;

    // Assign values to the members of the 'Person' structure
    strcpy(person1.name, "John");
    person1.age = 25;

    // Assign values to the members of the 'Data' union
    data1.num = 10;
    data1.score = 85.5;

    // Print the values stored in the 'Person' structure
    printf("Person Name: %s\n", person1.name);
    printf("Person Age: %d\n", person1.age);

    // Print the values stored in the 'Data' union
    printf("Data as Integer: %d\n", data1.num);
    printf("Data as Float: %.2f\n", data1.score);

    union Data data2;
    data2.num = 100;
    printf("Data as Integer: %d\n", data2.num);
    printf("Data as Integer: %.2f\n", data1.num);


    // Size of structure and union
    printf("Size of Structure: %lu bytes\n", sizeof(struct Person));
    printf("Size of Union: %lu bytes\n", sizeof(union Data));

    return 0;
}
