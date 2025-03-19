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

    employees = (Employee *)malloc(numEmployees * sizeof(Employee));

    if (employees == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter employee details:\n");
    for (i = 0; i < numEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
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
