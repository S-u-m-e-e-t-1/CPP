#include <stdio.h>
#include <stdarg.h>

int findMax(int count, ...) {
    int max = 0;

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        if (num > max) {
            max = num;
        }
    }

    va_end(args);

    return max;
}

int main() {
    int result = findMax(7, 10, 5, 23, 17, 8, 15, 12);
    printf("Maximum: %d\n", result);

    return 0;
}
