#include<stdio.h>
extern float pi=3.14;
void a(float, float*, float*);
 main()
{
    float x,y,z;

    printf("Enter radius of Circle\n");
    scanf("%f", &x);

    a(x, &y, &z);

    printf("\nArea of Circle = %f\n", y);
    printf("Perimeter of Circle = %f\n", z);

    
}

void a(float r, float *a, float *p)
{
    *a = pi* r * r;
    *p = 2 * pi * r;
}