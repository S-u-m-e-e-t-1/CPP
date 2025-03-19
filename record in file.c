 
#include "stdio.h"
 
int main( ) {
	FILE *fp ;
	char another = 'Y' ;
	struct emp {
		char name[40] ;
		int age ;
		float bs ;
	} ;
	struct emp e ;
	fp = fopen ( "EMPLOYEE.txt", "w" ) ;
	if ( fp == NULL ) {
		puts ( "Cannot open file" ) ;
	 return;
	}
	while ( another == 'Y' ) {
		printf ( "\nEnter name, age and basic salary: " ) ;
		scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ;
		fprintf ( fp, "%s %d %f\n", e.name, e.age, e.bs ) ;
		printf ( "Add another record (Y/N) " ) ;
		fflush ( stdin ) ;
		another = getche( ) ;
	}
	fclose ( fp ) ;
 	return 0;
}
/* #include "stdio.h" 
main( ) 
{ 
 FILE *fp ; 
 struct emp 
 { 
 char name[40] ; 
 int age ; 
 float bs ; 
 } ; 
 struct emp e ; 
 fp = fopen ( "EMPLOYEE.DAT", "r" ) ; 
 if ( fp == NULL ) 
 { 
 puts ( "Cannot open file" ) ; 
 exit( ) ; 
 } 
 while ( fscanf ( fp, "%s %d %f", e.name, &e.age, &e.bs ) != EOF ) 
 printf ( "\n%s %d %f", e.name, e.age, e.bs ) ; 
 fclose ( fp ) ; 
}*/