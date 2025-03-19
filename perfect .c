#include<stdio.h>

int main()
{
int i,j,s=0,n;
    printf("Enter a limit\n");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        for(j=1; j<i; j++)
        {
            if(i%j==0)
                s+=j;
        }
        if(s==i)
            printf("%d\n",i);
    }
}
