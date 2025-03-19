#include <stdio.h>

int main() {
int n, i, pos, value;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array: ");
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Enter the position where you want to insert the element: ");
scanf("%d", &pos);
printf("Enter the value you want to insert: ");
scanf("%d", &value);
for (i = n; i >= pos; i--)
arr[i] = arr[i-1];
arr[pos-1] = value;
printf("The modified array is: ");
for (i = 0; i < n+1; i++)
printf("%d ", arr[i]);
return 0;
}
