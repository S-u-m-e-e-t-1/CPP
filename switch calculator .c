#include<stdio.h>
void main()
{
    float a,b;
    char x;
    printf ("Enter a the equation\n ");
    scanf ("%f%c%f",&a,&x,&b);
    switch(x)
    {
    case'+':
        printf("a+b=%f",a+b);
        break;
    case'-':
        if(a>b)
            printf("a-b=%f",a-b);
        else
            printf("b-a=%f",b-a);
        break;
    case'*':
        printf("a×b=%f",a*b);
        break;
    case'/':
        if(a>b)
            printf("a/b=%f",a/b);
        
        break;
    default:
        printf("wrong equation");
    }
}









