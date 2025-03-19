#include<stdio.h>
main()
{
	float s=0.0,n,i;
	printf("enter a number \n");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		s+=1/i;
	}
	
	
	
	printf("%f",s);
}