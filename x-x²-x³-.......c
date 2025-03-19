#include<stdio.h>

int main()
{
    int a,i,n,c=0,s=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    
    printf("Enter a limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    s+=pow(a,i);
    }
    printf("%d+%d²+%d³+....=%d",a,a,a,s);
    }