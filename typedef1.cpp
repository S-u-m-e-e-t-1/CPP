/*#include <stdio.h>
typedef int Age;
int main() {
	Age personAge = 25;
	printf("Age: %d\n", personAge);
	return 0;
}
 */
 /*
#include <stdio.h>
typedef struct {
	char firstName[20];
		char lastName[20];
	} person;
int main() {
	person person;
	Strcpy(person.firstName, "John");
	Strcpy(person.lastName, "Doe");
	printf("Name: %s %s\n", person.firstName, person.lastName);
	return 0;
}
 */
/*#include <stdio.h>
typedef int (*Operation)(int, int);
int add(int a, int b) {
	return a + b;
}
int main() {
	Operation operation = add;
	int result = operation(5, 7);
	printf("Result: %d\n", result);
	return 0;
}
 
#include <stdio.h>
typedef enum {
Red,
Green,
blue
} color;
int main() {
	color favoritecolor = Green;
	Switch (favoritecolor) {
case Red:
		printf("Favorite color: Red\n");
		break;
case Green:
		printf("Favorite color: Green\n");
		break;
case blue:
		printf("Favorite color: blue\n");
		break;
	}
	return 0;
}
 */
#include <stdio.h>
typedef int* intpointer;
int main() {
	int number = 42;
	intpointer ptr = &number;
	
	printf("Value: %d\n", *ptr);
	return 0;
}
