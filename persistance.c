#include<stdio.h>

int main()
{
    int a, n, s=1, c=0, r;
    printf("Enter a number\n");
    scanf("%d", &n);
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
printf("persistance=%d", c);
}