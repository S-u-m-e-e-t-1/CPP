#include<stdio.h>
#include<math.h>
int arm(int);
int main()
{
	int i,m,n;
	printf("enter a number");
	scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
		m=arm(i);
		if(m==i);
		printf("%d\n",i);
		}
	}
		int arm(int a)
		{
			int r ,s=0;
			while(a!=0)
			{
				r=a%10;
				s+=pow(r,3);
				a/=10;
			}
			return s;
		}
