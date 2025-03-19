#include<stdio.h>


void main()
{
int a,b,c,n1,n2;
printf("Enter 3 digits\n");
scanf("%d%d%d",&a,&b,&c);
n1=a*100+b*10+c;
    printf("\n The number is = %d", n1); 
    n2=pow(a,3)+pow(b,3)+pow(c,3);
    if(n1==n2)
    printf("\n Armstrong");
    else
    printf("\n Not Armstrong");
}