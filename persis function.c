#include<stdio.h>
int p(int);
int main()
{
    int  x, g=0 ;
    printf("Enter a number\n");
    scanf("%d", &x);
    g=p(x);
      printf("persistance=%d", g);
}
int p(int n)
{
    int a,s=1, c=0, r;
    while(n>10)
    {
        a=n;
        while(a!=0)
        {
            r=a%10;
            s*=r;
            a/=10;
        }
        if(s>10)
        {
            c++;
            n=s;
        }
        else
            break;
    }
    return c ;
}