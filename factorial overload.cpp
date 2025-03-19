#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double factorial(double n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num1 = 5;
    double num2 = 5.5;

    cout << "Factorial of integer: " << factorial(num1) << endl;
    cout << "Factorial of double: " << factorial(num2) << endl;

    return 0;
}
