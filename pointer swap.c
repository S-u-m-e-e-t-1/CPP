#include<stdio.h>
main()
{
int a=10,b=20,*p,*q,**r,**t;
p=&a;
r=&p;
q=&b;
t=&q;
printf("a=%d\nb=%d\n",**t,**r);
}