#include<stdio.h>

int main()
{
int i,j,k,l;
for(i=5;i>=1; i--)
{
for(j=1;j<i;j++)
printf(" ");
for(k=5; k>=i;k--)
printf("*");
for(l=5; l>i;l--)
printf("*");
printf("\n");
}
for(i=1; i <= 4; i++)
{
for(j=1; j<= i; j++)
printf(" ");
for( k=4; k>= i; k--)
printf("*");
for(l= 4; l> i; l--)
printf("*");
printf("\n");
}
}