#include <stdio.h>
void main()
{
int n1,n,rem, sum=0;
printf("Entre a number");
scanf("%d",&n);
n1=n;
while(n>0)
{
rem=n%10;
sum+= pow(rem,3);
n/=10;
}
if(sum==n1)
printf("%d is Armstrong",n1);
else
printf("Not");
}
    