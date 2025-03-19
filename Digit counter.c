#include<stdio.h>
void main()
{
int  n,rem, a=0;
printf("Enter a number\n");
scanf("%d",&n);
while(n>0)
{
rem=n%10;

a++;
n/=10;
}
printf("number of digits = %d",a);
}