

#include <stdio.h>
int remove_occurences(int *arr,int SIZE,int x)
{
    int i, j;
    int removed = 0;

    for (i = 0; i <SIZE; i++)
    {
        if (arr[i] == x)
        {
            removed++;
            for (j = i; j < (SIZE - 1) ;j++)
            {
                arr[j] = arr[j+1];
            }
        }
    }
    return (SIZE - removed);
}

int main()
{
    int new_length;
    int i,n,val,arr[70];
    printf("size=");
	scanf("%d",&n);
printf("enter element\n");
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("enter avalue to remove\n");
	scanf("%d",&val);
    new_length = remove_occurences(arr,n,val);
    for (i = 0; i < new_length; i++)
    {
        printf("%d ", arr[i]);
    }
}