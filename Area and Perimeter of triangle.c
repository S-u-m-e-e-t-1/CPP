#include<stdio.h>
#include<math.h>
void main()
{ 
int a,b,c,s;
float area;

    printf("Enter three side of triangle");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n Area of triangle =%f",area);
    printf("\n Perimeter of triangle=%d", a+b+c);
   
    
}