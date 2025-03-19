#include<stdio.h>
void p(int);
main()
{
	int n;
	printf("enter a number \n");
	scanf("%d",&n);
	p(n);
}
void p(int a)
{
	int i,j,s;
	for(i=1;i<a;i++)
	{
		s=0;
		for(j=1;j<i;j++)
	    {
	    	if(i%j==0)
	    	s+=j;
	    	
		}
		if(s==i)
		printf("%d\n",i);
		
	}
}