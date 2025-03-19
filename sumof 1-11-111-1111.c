#include<stdio.h>

int main()
{
    int i=1,n,c=0,s=0;
    printf("Enter a limit\n");
    scanf("%d",&n);
do
{
printf("%d\n",i);
s+=i;
i=i*10+1;
c++;
}
while(c!=n);
printf("sum=%d",s);
    }