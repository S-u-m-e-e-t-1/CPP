#include<stdio.h>
main() {
	int arr[100],n,i,d,e=0,f,j,k;

	printf("Enter size\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	printf("\n\n The arry\n");
	for(i=0; i<n; i++)
		printf("[%d]",arr[i]);
	printf("\n\n\n\n\n");
	printf("<<<<<<OPERATION ON AN ARRAY>>>>>");
	printf("\n 1. Print even ");
	printf("\n 2. Print odd");
	printf("\n 3. Sum & Average");
	printf("\n 4. max & min");
	printf("\n 5. Revese array");
	printf("\n 6. Remove duplicate");
	printf("\n \n choose one of above mentioned option");
	scanf("%d",&d);
	switch(d) {
		case 1:
			goto even;
			break;
		case 2:
			goto odd;
			break;
		case 3:
			goto sum;
			break;
		case 4:
			goto max;
			break;
		case 5:
			goto revesr;
			break;
		case 6:
			goto rmvdplct ;
	}
even:
	printf("Even numbers are\n");
	for(i=0; i<n; i++)
		if(arr[i]%2==0)
			printf("[%d]",arr[i]);
	goto x;
odd:
	printf("odd numbers are\n");
	for(i=0; i<n; i++)
		if(arr[i]%2!=0)
			printf("[%d]",arr[i]);
	goto x;
sum:
	for(i=0; i<n; i++)
		e+= arr[i];
	printf("Sum=%d\n",e);

	printf("Average=%f", float(e/n));
	goto x;
max:
	f=arr[0];
	for(i=0; i<n; i++)
		if(arr[i]>f)
			f=arr[i];
	printf("maximum value \n= %d",f);

	f=arr[0];
	for(i=0; i<n; i++)
		if(arr[i]<f)
			f=arr[i];
	printf("\nminimum value \n= %d",f);
	goto x;
rmvdplct:
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(arr[i]==arr[j]) {
				for(k=j; k<n; k++) {
					arr[k]=arr[k+1];
				}

				n--;
				j--;
			}
		}
	}
	for(i=0; i<n; i++)
		printf("[%d]",arr[i]);
	goto x;
revesr:
	for(i=n-1; i>=0; i--)
		printf("[%d]",arr[i]);
	goto x;
x:
	printf(" ");
}