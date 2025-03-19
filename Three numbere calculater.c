#include<stdio.h>

int main()
{
float a,b,c;
printf("Enter three numbers:");
scanf("%f%f%f", &a,&b,&c);
    printf("\n Addition =%f", a+b+c);
    printf("\n Addition of a+b=%f", a+b);
    printf("\n Addition of b+c=%f", b+c);
    printf("\n Addition of a+c=%f",a+c);
printf("\n Substruction of a-b-c=%f",a-b-c);
    printf("\n Substruction of a-b = %f", a-b);
    printf("\n substraction of b-c=%f",b-c);
    printf("\n Substruction of a-c=%f", a-c);
  printf("\n Mutiplication of abc=%f", a*b*c);
printf("\n Mutiplication of ab=%f", a*b);
printf("\n Mutiplication of bc=%f", b*c);
printf("\n Mutiplication of ac=%f", a*c);
printf("\n Divisions of a/b= %f",a/b);
printf("\n Divisions of b/c =%f", b/c);
printf("\n Divisions of a/c =%f", a/c);
printf("\n Average =%f", (a+b+c)/3);
    
    
}