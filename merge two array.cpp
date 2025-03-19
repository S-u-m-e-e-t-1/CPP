#include<stdio.h>
main() {
	int a[5]= {1,3,7,9,10},b[5]= {2,4,5,6,8},c[10],i=0,j=0,d;
	while(a[i]!='\0') {
		c[i]=a[i];
		i++;
	}
	while(b[j]!='\0') {
		c[i]=b[j];
		i++;
		j++;
	}
	c[i]=='\0';
	for(i=0; i<10; i++) {

		for(j=i+1; j<10; j++)
			if(c[i]>c[j]) {
				d=c[i];
				c[i]=c[j];
				c[j]=d;
			}
	}
	printf("1st ordered array is\n");
	for(i=0; i<5; i++)
		printf("%d,",a[i]);
	printf("\n");
	
	
	printf("2nd ordered array is\n");
	for(i=0; i<5; i++)
		printf("%d,",b[i]);
	printf("\n");
	
	
	
	printf("merged ordered array is\n");
	for(i=0; i<10; i++)
		printf("%d,",c[i]);

}