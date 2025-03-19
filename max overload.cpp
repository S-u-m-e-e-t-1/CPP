#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

double max(double a, double b, double c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main() {
    int num1 = 10, num2 = 15, num3 = 5;
    double num4 = 5.5, num5 = 7.2, num6 = 3.1;

    cout << "Maximum of three integers: " << max(num1, num2, num3) << endl;
    cout << "Maximum of three doubles: " << max(num4, num5, num6) << endl;

    return 0;
}
