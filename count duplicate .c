#include<stdio.h>
main()
{
int a[100], b[100], i, n,j, C=0, c=0;
printf("size");
scanf("%d",&n);
printf("Enter elements\n");
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
    printf(" No of deeplicate element \n");
for(i=0;i<n;i++)
{
if(a[i]!=-1)
{
if(b[i]> 1)
c++;
}
}
printf("%d", c);




}