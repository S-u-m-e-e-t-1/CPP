#include<stdio.h>
int p(int);
int main() {
	int d=0;
	printf("prime number upto 100 \n");
	for(int j=2; j<=100; j++) {
		d=p(j);
		if(d==0)
			printf("%d\n",j);
		d=0;
	}
	
	
}
int p(int x) {
	int i,c=0;
	for(int i=2; i<=x/2; i++) {
		if(x%i==0) {
			c=1;
			break;
		}
	}
	return c;
}