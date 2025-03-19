#include <iostream>
using namespace std;

inline double power(double base, double exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base = 2.0, exponent = 3.0;

    cout << "Result: " << power(base, exponent) << endl;

    return 0;
}
