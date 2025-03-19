#include<stdio.h>

int main()
{

float s=0.0,n,i;
printf("enter a number\n");
scanf("%f",&n);
for(i=1;i<=n;i++)
s+=1/i;
printf("1+1/2+....upto %f=%f",n,s);
}