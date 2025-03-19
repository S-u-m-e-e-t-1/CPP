#include <stdio.h>

struct Student {
	char name[50];
	int age;
	float gpa;
};

int main() {
	int n,i;

	struct Student student[50];
	printf("Enter number of students\n");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("Enter student name: ");
		scanf("%s", student[i].name);

		printf("Enter student age: ");
		scanf("%d", &student[i].age);

		printf("Enter student GPA: ");
		scanf("%f", &student[i].gpa);

	}
	FILE *file;
	file = fopen("student_record1.pdf", "w");

	if (file == NULL) {
		printf("Error opening file.\n");
		return 1;
	} else
		for(i=0; i<n; i++) {
			fprintf(file, "Name: %s\n", student[i].name);
			fprintf(file, "Age: %d\n", student[i].age);
			fprintf(file, "GPA: %.2f\n", student[i].gpa);
		}
	fclose(file);

	printf("Student record saved successfully.\n");

	return 0;
}