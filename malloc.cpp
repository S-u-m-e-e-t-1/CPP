#include<stdio.h>
#include<malloc.h>
main( ) {
	int *p,n,i;
	printf("Enter the number of integers to be entered ") ;
	scanf("%d",&n) ;
	p= (int *) malloc (n* sizeof (int) ) ;
	if (p==NULL) {

		printf ("Memory net available\n");
		
	}
	for(i=0; i<n; i++) {

		printf ("Enter an integer ") ;
		scanf("%d",p+i);
	}
	for(i=0; i<n; i++)
		printf("%d\t",*(p+i)) ;
}