#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void printStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Student %d - Name: %s, Age: %d\n", i + 1, students[i].name, students[i].age);
    }
}

int main() {
    struct Student class[] = {
        {"Alice", 22},
        {"Bob", 20},
        {"Charlie", 21}
    };
    
    printStudents(class, 3);
    
    return 0;
}
