#include<stdio.h>
main()
{
    int a[100],n,i;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter element\n");
    for(i=0; i!=n; i++)
        scanf("%d",&a[i]);
    printf("Array\n");
    for(i=0; i!=n; i++)
printf("address of %d in array is %d\n",a[i],&a[i]);
}