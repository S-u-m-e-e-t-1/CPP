#include<stdio.h>
#include<math.h>
void main()
{
float degree,radian,pi;
printf(" Enter degree value=");
scanf("%f",&degree);
pi=3.1416;
radian=degree*(pi/180);
printf("\n Radian value=%f",radian);
printf("\n sin value=%f",sin(radian));
printf("\n cos value=%f",cos(radian));
printf("\n tan value=%f",tan(radian));
printf("\n cot value=%f",1/tan(radian));
printf("\n sec value=%f",1/cos(radian));
printf("\n cosec value=%f",1/sin(radian));
}