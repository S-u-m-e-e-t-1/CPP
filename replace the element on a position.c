#include <stdio.h>

int main()
{
int size, i, e, new_element, position;
printf("Enter the size of the array: ");
scanf("%d", &size);

int array[size];
printf("Enter the elements of the array: ");
for (i = 1; i <=size; i++)
{
    scanf("%d", &array[i]);
}

printf("Enter the element to be replaced: ");
scanf("%d", &e);

printf("Enter the new element: ");
scanf("%d", &new_element);

for (i = 1; i <=size; i++)
{
    if (array[i] == array[e])
    {
        position = i;
        break;
    }
}

array[position] = new_element;

printf("New array is: ");
for (i = 1; i <= size; i++)
{
    printf("%d ", array[i]);
}

return 0;
}
