#include<stdio.h>
main()
{
int a[100], b[100], i, n,j, C=0;
printf("size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
    {
    C=1;
    
     {
      for(j=i+1; j<n; j++)
       {
        if(a[i]==a[j])
        {
         C++;
         a[j]=-1;
        }
      }
       b[i]=C;
      }
    }
for(i=0;i<n;i++)
{
if(a[i]!=-1)
{
printf("%d occur %d \n", a[i], b[i] );
}
}





}