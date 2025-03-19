#include<stdio.h>
main()
{
int i, m, n, a[100];
printf("Enter size ");
scanf("%d",&n);
printf("Enter element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Array\n");
for(i=0;i<n;i++)
{
printf("[%d]",a[i]);
}
printf("\n");
printf("Enter position to delet \n");
scanf("%d",& m);
if(m<=n)
{
n--;
for(i=m-1;i<n;i++)
a[i]=a[i+1];
printf("Updated array\n");
for(i=0;i<n;i++)
printf("[%d]", a[i]);
}
else 
printf("Deletion not possible");
}