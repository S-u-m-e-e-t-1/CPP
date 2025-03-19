#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int* arr;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	arr = (int*)calloc(n, sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
	return 0;
}