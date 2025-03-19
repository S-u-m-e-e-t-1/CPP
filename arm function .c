#include<stdio.h>

int main()
{
int i,n,a;
    printf("Enter a limit");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    a=arm(i);
    if(a==1)
    printf("%d\n",i);
    }
}
int arm(int a )
{
int r,s=0,a1;
a1=a;
while(a!=0)
{
r=a%10;
s+=r*r*r;
a/=10;
}
if(s==a1)
return 1;
else
return 0;
}