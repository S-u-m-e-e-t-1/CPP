#include<stdio.h>
int m();

main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=m(a,b);
    printf("product=%d",c);

}
int m(int d,int e)
{
    int f=0,s=0;
    while(f!=e)
    {
        s+=d;
        f++;
    }
    return s;
}