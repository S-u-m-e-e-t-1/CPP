#include<stdio.h>

int main()
{
    int a, b[100], c, d, i;
    printf("Enter size");
    scanf("%d",&a);
    printf("Enter element\n");
    for(i=0;i<a;i++)
    {
    scanf("%d",&b[i]);
    }
    printf("Array \n");
    for(i=0;i<a;i++)
    printf("[%d]",b[i]);
    printf("\nEnter element to insert \n");
    scanf("%d",&c);
    printf("Enter position to insert\n");
    scanf("%d",&d);
    printf("updated array\n");
    if(d<=a)
    {
    for(i=a;i>=d;i--)
    b[d-1]= c;
    for(i=0;i<a;i++)
    printf("[%d]",b[i]);
    }
    else
    printf("Position out of array");
    }