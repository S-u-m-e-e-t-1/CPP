#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int length;
    char *str;

    printf("Enter the current length of the string: ");
    scanf("%d", &length);

    str = (char *)malloc((length + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf("%s", str);

    int newLength;
    printf("Enter the new length of the string: ");
    scanf("%d", &newLength);

    str = (char *)realloc(str, (newLength + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter additional characters: ");
    scanf("%s", &str[length]);

    printf("The string entered is: %s\n", str);

    free(str);
    return 0;
}
