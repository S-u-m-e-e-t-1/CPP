#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf ("Enter a number ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if (c==2)
    printf ("The number is PRIME");
    else
    if(n==0||n==1)
    printf("Special");
    else
    printf ("The number is COMPOSITE");
    
}