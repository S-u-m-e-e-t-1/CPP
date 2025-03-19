#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,x1,x2;
printf("ax²+bx+c=O");
printf("\n a=");
scanf("%f",&a);
printf("\n b=");
scanf("%f",&b);
printf("\n c=");
scanf("%f",&c);
x1=(-b+sqrt(b*b-4*a*c))/(2*a);
printf("\n x=%f",x1);
x2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("\n x=%f",x2);

}