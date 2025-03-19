#include<stdio.h>

int main()
{
    int i=1,n,c=0;
    printf("Enter a limit\n");
    scanf("%d",&n);
do
{
printf("%d\n",i);
i*=10+1;
c++;
}
while(c!=n);
    }