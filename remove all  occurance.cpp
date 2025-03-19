#include <stdio.h>


int deletechar(int *s,int c,int x) {
	int i,k=0,f;


	for(i=0; i<x; i++) {
		s[i]=s[i+k];


		if(s[i]==c) {
			k++;
			i--;
		}

	}
	f=i-k;
	return(f);

}
void array(int *arr,int l) {
	int i;
	printf("array\n");
	for(i=0; i<l; i++)
		printf("%d,",arr[i]);
}

int main() {

	int s[1000],c,n,i,d,g;

	printf("Enter  the string size  : ");
	scanf("%d",&n);
	printf("Enter character: ");
	for(i=0; i<n; i++)
		scanf("%d",&s[i]);
	array(s,n);
	printf("valu ;");
	scanf("%d",&c);
	g=deletechar(s,c,n);
	printf("after removing %d",c);
	array(s,g);





}