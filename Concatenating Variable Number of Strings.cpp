#include <stdio.h>
#include <stdarg.h>
#include <string.h>

char* concatenate(int count, ...) {
    char* result = (char*)malloc(sizeof(char));

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        char* str = va_arg(args, char*);
        result = (char*)realloc(result, (strlen(result) + strlen(str) + 1) * sizeof(char));
        strcat(result, str);
    }

    va_end(args);

    return result;
}

int main() {
    char* result = concatenate(3, "Hello, ", "Variable ", "Arguments!");
    printf("Concatenated String: %s\n", result);

    free(result);
    return 0;
}
