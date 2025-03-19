#include<stdio.h>

int main()
{
    int i, arr[10], n, h, l, m,x;
    printf("enter size\n");
    scanf("%d",&n);
    printf("Enter  elements \n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be search: ");
    scanf("%d", &x);
    l = 0;
    h = n-1;
    m= (l+h)/2;
    while(l<= h)
    {
        if(arr[m]<x)
            l = m+1;
        else if(arr[m]==x)
        {
            printf("\nThe number, %d found at Position %d", x, m+1);
            break;
        }
        else
            h= m-1;
        m= (l+h)/2;
    }
    if(l>h)
        printf("\nThe number, %d is not found in given Array", x);

    return 0;
}