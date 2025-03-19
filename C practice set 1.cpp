/*#include <stdio.h>
int main() {
    int a = 5, b = 10, sum;
    sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 10, b = 5, result;
    result = a - b;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 4, product;
    product = a * b;
    printf("Product: %d\n", product);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 20, b = 4, result;
    result = a / b;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 20, b = 3, result;
    result = a % b;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    printf("Before increment: %d\n", a);
    a++;
    printf("After increment: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    printf("Before decrement: %d\n", a);
    a--;
    printf("After decrement: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 1, b = 0;
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 3;
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    printf("a = %d\n", a);
    a += 3;
    printf("a += 3: %d\n", a);
    a -= 2;
    printf("a -= 2: %d\n", a);
    a *= 4;
    printf("a *= 4: %d\n", a);
    a /= 2;
    printf("a /= 2: %d\n", a);
    a %= 5;
    printf("a %%= 5: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10, result;
    result = (a > b) ? a : b;
    printf("Larger value: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10, result;
    result = (a > b) ? a : b;
    printf("Larger value: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 15;
    int result = (a += 2, b += 3, c -= 1, a + b + c);
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 2;
    int result = a << b;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 20, b = 2;
    int result = a >> b;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 0;
    if (a && (b = 10)) {
        printf("b: %d\n", b);
    } else {
        printf("b: %d\n", b);
    }
    return 0;
}
#include <stdio.h>
int main() {
    int a = 0, b = 15;
    if (a || (b = 10)) {
        printf("b: %d\n", b);
    } else {
        printf("b: %d\n", b);
    }
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    int result = (a > b) ? (a - b) : (b - a);
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b, c;

    b = a++; // Postfix increment
    printf("a: %d, b: %d\n", a, b);

    c = ++a; // Prefix increment
    printf("a: %d, c: %d\n", a, c);

    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b, c;

    b = a--; // Postfix decrement
    printf("a: %d, b: %d\n", a, b);

    c = --a; // Prefix decrement
    printf("a: %d, c: %d\n", a, c);

    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    a |= 2; // Equivalent to: a = a | 2;
    printf("Result: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    a &= 3; // Equivalent to: a = a & 3;
    printf("Result: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    a ^= 1; // Equivalent to: a = a ^ 1;
    printf("Result: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    a <<= 2; // Equivalent to: a = a << 2;
    printf("Result: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 16;
    a >>= 2; // Equivalent to: a = a >> 2;
    printf("Result: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10, max;
    max = (a > b) ? a : b;
    printf("Max: %d\n", max);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 0;
    int result = !a;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    return 0;
}
#include <stdio.h>
int main() {
    float a = 5.5, b = 2.0;
    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    float division = a / b;

    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Division: %.2f\n", division);

    return 0;
}
#include <stdio.h>
int main() {
    float a = 5.5, b = 2.0;
    int result1 = (a > b) && (a != b);
    int result2 = (a < b) || (a == b);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);

    return 0;
}
#include <stdio.h>
int main() {
    int a = -8;
    a >>= 1; // Equivalent to: a = a >> 1;
    printf("Result: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    int result = ~a;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    return 0;
}
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Max: %d\n", max);
    return 0;
}
#include <stdio.h>
int main() {
    int length, width, area, perimeter;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    return 0;
}
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
#include <stdio.h>
int main() {
    int num, binary[32], index = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }
    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");
    return 0;
}
#include <stdio.h>
int main() {
    int num, octal[32], index = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num > 0) {
        octal[index++] = num % 8;
        num /= 8;
    }
    printf("Octal representation: ");
    for (int i = index - 1; i >= 0; i--)
        printf("%d", octal[i]);
    printf("\n");
    return 0;
}
#include <stdio.h>
int main() {
    int num, hexadecimal[32], index = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num > 0) {
        hexadecimal[index++] = num % 16;
        num /= 16;
    }
    printf("Hexadecimal representation: ");
    for (int i = index - 1; i >= 0; i--) {
        if (hexadecimal[i] < 10)
            printf("%d", hexadecimal[i]);
        else
            printf("%c", 'A' + hexadecimal[i] - 10);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 3;
    int result = a ^ b;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    int result = ~a;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    int result = a << 2;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 20;
    int result = a >> 2;
    printf("Result: %d\n", result);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5;
    a &= 3; // Equivalent to: a = a & 3;
    printf("Result: %d\n", a);
    return 0;
}
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num & 1)
        printf("%d is odd.\n", num);
    else
        printf("%d is even.\n", num);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    int max = (a > b) ? a : b;
    printf("Max: %d\n", max);
    return 0;
}
#include <stdio.h>
int main() {
    int num = -7;
    (num >= 0) ? printf("Positive\n") : printf("Negative\n");
    return 0;
}
#include <stdio.h>
int main() {
    int num = 6;
    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");
    return 0;
}
#include <stdio.h>
int main() {
    int year = 2024;
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("Leap year\n") : printf("Not a leap year\n");
    return 0;
}
#include <stdio.h>
int main() {
    int num = -8;
    int absolute = (num < 0) ? -num : num;
    printf("Absolute value: %d\n", absolute);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 3;
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("Min: %d\n", min);
    return 0;
}
#include <stdio.h>
int main() {
    int num = 15;
    int lower = 10, upper = 20;
    (num >= lower && num <= upper) ? printf("Within range\n") : printf("Outside range\n");
    return 0;
}
#include <stdio.h>
int main() {
    char ch = 'a';
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? printf("Vowel\n") : printf("Consonant\n");
    return 0;
}
#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 8;
    int largest = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("Largest: %d\n", largest);
    return 0;
}
#include <stdio.h>
int main() {
    int num = -2;
    (num > 0) ? printf("Positive\n") : (num < 0) ? printf("Negative\n") : printf("Zero\n");
    return 0;
}





*/
