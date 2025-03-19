#include<stdio.h>

int main()
{
    int a[100],n,i,x,y;
    printf("Enter size =");
    scanf("%d",&n);
    printf("enter element in saray\n");
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    y=a[0];
    for(i=1; i<n; i++)
    {
        if(x<a[i])
        {
            x=a[i];
        }
        if(y>a[i])
        {
            y=a[i];
        }

    }
    printf("sum of max & min=%d",x+y);
    

}