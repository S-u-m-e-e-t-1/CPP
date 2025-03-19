#include<stdio.h>
#define swap(a,b){a+=b ;b=a-b ;a=a-b;}
 main()
{
int a,b;
    printf("enter a number a=");
    scanf("%d",&a);
    printf("enter a number b=");
    scanf("%d",&b);
     swap(a,b);
printf("after swaping\n a=%d\n b=%d",a,b);
}