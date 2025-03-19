#include <stdio.h>
void main()
{
int x=0, y=1, n, sum;
printf("Entre a number");
scanf("%d",&n);
printf("%d,%d",x,y);
while(sum<=n)
{
sum=x+y;
printf(",%d",sum);
x=y;
y=sum;
}

}
    