#include<stdio.h>

int main()
{
int i,j,k,l, m, n, o, p;
for(i=1;i<=5; i++)
{
for(j=5;j>i;j--)
printf(" ");
for(k=1; k<=i;k++)
printf("*");
for(l=1; l<i;l++)
printf("*");
printf("\n");
}
for(m=1; m <= 4; m++)
{
for(n=4; n>= m; n--)
printf(" ");
for( o=1; o<= m; o++)
printf("*");
for(p= 1; p< m; p++)
printf("*");
printf("\n");
}
}