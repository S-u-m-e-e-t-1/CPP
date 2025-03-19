#include<stdio.h>
main() {
	int a[100],b,c,d,e=0,f,g,h;
	float k;
	printf("Enter size\n");
	scanf("%d",&b);
	printf("Enter elements\n");
	for(c=0; c<b; c++)
		scanf("%d",&a[c]);
	printf("\n\n The array\n");
	for(c=0; c<b; c++)
		printf("[%d]",a[c]);
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
	for(c=0; c<b; c++)
		if(a[c]%2==0)
			printf("[%d]",a[c]);
	goto x;
odd:
	printf("odd numbers are\n");
	for(c=0; c<b; c++)
		if(a[c]%2!=0)
			printf("[%d]",a[c]);
	goto x;
sum:
	for(c=0; c<b; c++)
		e+= a[c];
	printf("Sum=%d\n",e);

	printf("Average=%f", float(e/b));
	goto x;
max:
	f=a[0];
	for(c=0; c<b; c++)
		if(a[c]>f)
			f=a[c];
	printf("maximum value \n= %d",f);

	f=a[0];
	for(c=0; c<b; c++)
		if(a[c]<f)
			f=a[c];
	printf("\nminimum value \n= %d",f);
	goto x;
rmvdplct:
	for(c=0; c<b; c++) {
		for(g=c+1; g<b; g++) {
			if(a[c]==a[g]) {
				for(h=g; h<b; h++) {
					a[h]=a[h+1];
				}

				b--;
				g--;
			}
		}
	}
	for(c=0; c<b; c++)
		printf("[%d]",a[c]);
	goto x;
revesr:
	for(c=b-1; c>=0; c--)
		printf("[%d]",a[c]);
	goto x;
x:
	printf(" ");
}