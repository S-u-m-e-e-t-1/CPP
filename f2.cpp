#include <stdio.h>
#include<string.h>
// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare an array of structures
    struct Person people[3];

    // Accessing elements of the array
    strcpy(people[0].name, "John");
    people[0].age = 25;

    strcpy(people[1].name, "Jane");
    people[1].age = 30;

    strcpy(people[2].name, "Bob");
    people[2].age = 35;

    // Displaying the values
    for (int i = 0; i < 3; i++) {
        printf("Person %d\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("\n");
    }

    return 0;
}