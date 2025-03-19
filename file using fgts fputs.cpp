#include <stdio.h>

int main() {
	FILE *fp;
	char str[100],CONTENT[1000];
	char name[20];
	printf("Enter file name ");
	scanf("%s",name);
	fp = fopen(name, "w");

	if (fp == NULL) {
		perror("Error opening the file");
		return 1;
	}
	printf("Enter content\n");
	scanf("%s",CONTENT);
	fputs(CONTENT, fp);

	fclose(fp);


	fp = fopen(name, "r");
	if (fp == NULL) {
		perror("Error opening the file");
		return 1;
	}

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fseek(fp, 0, SEEK_END);
	long pos = ftell(fp);
	printf("File size: %ld bytes\n", pos);
	rewind(fp);
	fclose(fp);

	return 0;
}
