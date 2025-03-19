#include <stdio.h>
#include <stdlib.h>

int main() {
    int numStrings, i;
    char **strings;

    printf("Enter the current number of strings: ");
    scanf("%d", &numStrings);

    strings = (char **)malloc(numStrings * sizeof(char *));

    if (strings == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter strings:\n");
    for (i = 0; i < numStrings; i++) {
        strings[i] = (char *)malloc(20 * sizeof(char));
        printf("String %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    int newNumStrings;
    printf("Enter the new number of strings: ");
    scanf("%d", &newNumStrings);

    strings = (char **)realloc(strings, newNumStrings * sizeof(char *));

    if (strings == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter additional strings:\n");
    for (i = numStrings; i < newNumStrings; i++) {
        strings[i] = (char *)malloc(20 * sizeof(char));
        printf("String %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    printf("Strings entered:\n");
    for (i = 0; i < newNumStrings; i++) {
        printf("String %d: %s\n", i + 1, strings[i]);
    }

    for (i = 0; i < newNumStrings; i++) {
        free(strings[i]);
    }
    free(strings);
    return 0;
}
