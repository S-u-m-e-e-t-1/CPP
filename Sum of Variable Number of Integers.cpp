#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    int total = 0;

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        total += num;
    }

    va_end(args);

    return total;
}

int main() {
    int result = sum(5, 1, 2, 3, 4, 5);
    printf("Sum: %d\n", result);

    return 0;
}
