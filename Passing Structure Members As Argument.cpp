#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void printAge(int age) {
    printf("Age: %d\n", age);
}

int main() {
    struct Student student1;
    strcpy(student1.name, "John");
    student1.age = 20;
    
    printAge(student1.age);
    
    return 0;
}
