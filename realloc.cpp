#include<stdio.h>
#include<malloc.h>
main ( ) {
	int i, *ptr;
	ptr=(int *)malloc(5*sizeof(int));
	
	if (ptr==NULL) {
	
		printf ("Memory not available\n");
		
	}
	printf ("Enter 5 integers ") ;
	for(i=0; i<5; i++)
		scanf("%d ",ptr+i);
	ptr= (int *) realloc (ptr, 9 * sizeof (int) );

	if (ptr==NULL) {
		printf ("Memory not available\n");



	}
	printf ("Enter 4 more integers");
	        for(i=5; i<9; i++)
	        scanf("%d",ptr+i);
	        for(i=0; i<9; i++)
		        printf ("%d ", * (ptr+i));
	}