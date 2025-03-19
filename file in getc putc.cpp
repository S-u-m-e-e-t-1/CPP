#include <stdio.h>

int main() {
	FILE *fp;
	int ch;
	char name[20];
	printf("Enter file name ");
	scanf("%s",name);
	fp = fopen(name, "w");
	if (fp == NULL) {
		printf("Error opening the file");
		return 1;
	}

	while((ch=getchar())!='/') {
		fputc(ch,fp);
	}

	fclose(fp);

	fp = fopen(name, "r");
	if (fp == NULL) {
		printf("Error opening the file");
		return 1;
	}

	while ((ch = getc(fp)) != EOF) {
		putchar(ch);
	}

	fclose(fp);

	return 0;
}
