#include<stdio.h>

int main()
{
    int i=1,j=1,sum=0,n;
    printf("Enter the limit");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        sum+=i;
        i+=j;
        j++;
    }
    while(i<n);
printf("1+2+4+7+......+%d=%d",n,sum);}