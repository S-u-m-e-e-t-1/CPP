#include<stdio.h>
main()
{
   char a[100],n,i;
    printf("Enter string\n");
    scanf("%s",&a);
   n= strlen(a);
    for(i=0; i!=n; i++)
printf("address of %c in string is %u\n",a[i],&a[i]);
}