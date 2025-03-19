#include<stdio.h>
int p(int);
main() {
	int a,b;
	printf ("enter a number \n");
	scanf("%d",&a);
	b=p(a);
	if(b==0)
		printf("%d is prime",a);
	else
		printf("%d is not prime",a);
}
int p(int x) {
	int i,c=0;
	for(i=2; i<=x/2; i++) {
		if(x%i==0) {
			c=1;
			break;

		}
	}
	return c;
}

