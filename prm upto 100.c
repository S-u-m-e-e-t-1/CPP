#include<stdio.h>

int main()
{
int c=0;
printf("prime number upto 100 \n");
    for(int i=1; i<=100; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
        printf("%d\n",i);
       c    =0;
    }
}