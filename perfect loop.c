#include<stdio.h>

int main()
{
    int i,j,s,n;
    printf("Enter a limit\n");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        s=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
                s+=j;
        }
        if(s==i)
            printf("%d\n",i);
    }
}
