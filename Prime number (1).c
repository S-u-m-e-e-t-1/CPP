#include<stdio.h>
main()
{
int i, j, n, c;
printf("limit");
scanf("%d",&n);
for(i=1;i<=n; i++)
{
for(j=2; j<i;j++)
{
if(i%j==0)
{
c++;
break;
}}
if(c==0&&i!=1)
printf("%d,", i);
c=0;
}



}