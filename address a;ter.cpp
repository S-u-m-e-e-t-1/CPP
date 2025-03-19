#include<stdio.h>
int f(int*,int*);
main()
{
	int a,b;
	printf("enter a=");
	scanf("%d",&a);
		printf("enter b=");
	scanf("%d",&b);
	printf("before altering a=%d\nb=%d",a,b);
	f(&a,&b);
	printf("\n afer altering a=%d\nb=%d",a,b);
}
int f(int *x,int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
	
}
	
	
	
	
	
	
	
	
	
	
	