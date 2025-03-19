#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10, num2 = 15;
    double num3 = 5.5, num4 = 7.2;

    cout << "Maximum of integers: " << max(num1, num2) << endl;
    cout << "Maximum of doubles: " << max(num3, num4) << endl;

    return 0;
}
