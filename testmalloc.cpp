#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,*arr,i;
    printf("enter size=");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    if(arr==NULL)
        printf("no memory is there\n");
    else
        printf("enter elements=\n");
    for(i=1; i<n; i++)
    {
        scanf("%d",arr+i);
        }
    printf("%d",*(arr+i));



}