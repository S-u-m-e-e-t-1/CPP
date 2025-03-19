#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a string: ");
    scanf("%s", name);

    printf("Length of the string: %d\n", strlen(name));

    printf("Lowercase string: %s\n", strlwr(name));

    printf("Uppercase string: %s\n", strupr(name));

    return 0;
}
