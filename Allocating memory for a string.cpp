#include <stdio.h>
#include <stdlib.h>

int main() {
    int length;
    char *str;

    printf("Enter the length of the string: ");
    scanf("%d", &length);

    str = (char *)malloc((length + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf("%s", str);

    printf("The string entered is: %s\n", str);

    free(str);
    return 0;
}
