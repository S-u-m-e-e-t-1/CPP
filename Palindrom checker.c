#include<stdio.h>


void main()
{
int a,b,c,n1,n2;
printf("Enter 3 digits\n");
scanf("%d%d%d",&a,&b,&c);
n1=a*100+b*10+c;
    printf("\n The number is = %d", n1); 
    n2=c*100+b*10+a;
    if(n1==n2)
    printf("\n Palindrom");
    else
    printf("\n Not Palindrom");
}