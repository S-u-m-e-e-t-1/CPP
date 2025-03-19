#include<stdio.h>

int main()
{
    int a[100], n,i,j,s,t;
    printf("size=");
    scanf("%d",&n);
    printf("enter\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n-1; i++)
    {
        t=a[i];
        j=i-1;
        while ( j>=0&&t<=a[j])
        {
            a[j+1]=a[j];
            j--;
        }
    }
    printf("after sorting\n");
    for(i=0; i<n; i++)
        printf("%d,",a[i]);
}