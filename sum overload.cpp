#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    double num3 = 2.5, num4 = 4.7;

    cout << "Sum of integers: " << add(num1, num2) << endl;
    cout << "Sum of doubles: " << add(num3, num4) << endl;

    return 0;
}
