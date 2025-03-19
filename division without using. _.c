#include<stdio.h>
int a();
main()
{
    int b,c,d,e;
    printf("Enter two numbers\n");
    scanf("%d%d",&b,&c);
    a(b,c,&d,&e);
    printf("quotient=%d\nremainder=%d",d,e);
}
int a(int f,int g,int *h,int *i)
{
    int j=0;
    while(f>=g)
    {
        f-=g;
        j++;
    }
    *h=j;
    *i=f;
}