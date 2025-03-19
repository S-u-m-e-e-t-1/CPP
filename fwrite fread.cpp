#include <stdio.h>
#include <stdlib.h>

struct record
{
    char name[20];
    int roll;
    int mark;
} s1;

int main()
{
    int i, n;
    FILE *fp;
    printf("Enter no of students\n");
    scanf("%d", &n);

    // Open the file in binary write mode ("wb") to avoid issues with newline characters on some systems
    if ((fp = fopen("stu", "wb")) == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", s1.name);
        printf("Enter roll: ");
        scanf("%d", &s1.roll);
        printf("Enter mark: ");
        scanf("%d", &s1.mark);

        fwrite(&s1, sizeof(s1), 1, fp);
    }

    fclose(fp);
    return 0;
}