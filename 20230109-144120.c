#include <stdio.h>

int main() {
  
    int n, i, pos, element;
    int a[100];

  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }

 
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

  
    if (pos < 0 || pos > n)
     {
        printf("Invalid position!\n");
    } else 
    {
    
        for (i = pos; i < n - 1; i++) 
        {
            a[i] = a[i + 1];
        }
        n--; 
        printf("The resulting array is: ");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
    