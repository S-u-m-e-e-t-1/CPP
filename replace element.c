#include <stdio.h>

int main()
{
int size, i, element, new_element, position;
printf("Enter the size of the array: ");
scanf("%d", &size);

int array[size];
printf("Enter the elements of the array: ");
for (i = 0; i < size; i++)
{
    scanf("%d", &array[i]);
}

printf("Enter the element to be replaced: ");
scanf("%d", &element);

printf("Enter the new element: ");
scanf("%d", &new_element);

for (i = 0; i < size; i++)
{
    if (array[i] == element)
    {
        position = i;
        break;
    }
}

array[position] = new_element;

printf("New array is: ");
for (i = 0; i < size; i++)
{
    printf("%d ", array[i]);
}

return 0;
}
