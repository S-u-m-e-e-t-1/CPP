#include<stdio.h>

int main()
{
int a[5]={1,2,3,4,5},*p,i;
p=a;
for(i=0;i<5;i++)
{
printf("adress of a[%d]=%u,%u,%u,%u\n"
,i,&a[i],(a+i),(p+i),&p[i]);
printf("value of a[%d]=%d,%d,%d,%d\n"
,i,a[i],*(a+i),*(p+i),p[i]);
}
}