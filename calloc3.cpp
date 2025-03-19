#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

int main() {
    int numEmployees, i;
    Employee *employees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    employees = (Employee *)calloc(numEmployees, sizeof(Employee));

    if (employees == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Employee details:\n");
    for (i = 0; i < numEmployees; i++) {
        scanf("Employee %d:\n", i + 1);
        scanf("ID: %d\n", employees[i].id);
        scanf("Name: %s\n", employees[i].name);
        scanf("Salary: %.2f\n", employees[i].salary);
    }

    printf("Employee details:\n");
    for (i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    free(employees);
    return 0;
}
