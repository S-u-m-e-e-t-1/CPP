#include<stdio.h>


void  pytha(int limit)
{
    int a,b,c=0,m=2,n;
    while(c<limit)
    {
        for(n=1; n<m; n++)
        {
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(c>limit)
                break;
            printf("%d.  %d.  %d \n",a,b,c);
        }
        m++;
    }
}
main( )
{
    int limit,x;
    printf("Enter the limit");
    scanf("%d",& limit);
    pytha(limit);
}