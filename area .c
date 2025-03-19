#include<stdio.h>
extern float d = 3.1415927;
float a(float b);
float c(float b);
void main()
{
    float b;

    printf("Enter radius: ");
    scanf("%f", &b);
    printf("Area : %f\n", a(b));
    printf("Circumference: %f\n", c(b));

}

float a(float b)
{
    return (d*b*b);
}

float c(float b)
 {
    return (2*d*b);
}
