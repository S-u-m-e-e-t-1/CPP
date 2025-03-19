#include<stdio.h>

int main()
{
    int c=0;
    printf("prime number upto 100 \n");
    for(int i=2; i<=100; i++)
    {
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
            printf("%d\n",i);
        c=0;
    }
}