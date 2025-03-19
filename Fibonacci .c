#include<stdio.h>
#include<math.h>
int psqure(int x)
{
int s=(int)sqrt(x);
return (s*s==x);
}
int fibo(int x )
{
return psqure(5*x*x+4)||psqure(5*x*x-4);
}
int main()
{
int n,f=0;
printf("Enter a number\n");
scanf("%d",&n);
if(n==0||n==1)
printf("%d is Fibonacci",n);
else
{
f=fibo(n);
if(f==1)
printf("%d is Fibonacci",n);

else
printf("%d is not Fibonacci",n);

}

}