#include<stdio.h>

void main()
{
int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a%2==0||a%3==0||a%5==0||a%7==0)
    printf("\n Number is compound");
    else
    if(a==0||a==1)
    printf("\n Number is compound");
    else
    printf("\n Number is Prime");
}