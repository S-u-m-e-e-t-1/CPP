#include<stdio.h>
main()
{
int a=10,b=20;
int *p=&a,*q=&b,r;
printf("before swap \na=%d \nb=%d",*p,*q);
r=*p;
*p=*q;
*q=r;
printf("\nafter swap \na=%d \nb=%d",*p,*q);

}