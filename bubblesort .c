#include<stdio.h>

int main()
{
    int a[100], n,i,j,s,t;
    printf("size=");
    scanf("%d",&n);
    printf("enter\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("after sorting\n");
    for(i=0; i<n; i++)
        printf("%d,",a[i]);
}