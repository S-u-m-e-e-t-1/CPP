#include <iostream>
using namespace std;

inline double average(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    double num1 = 5.0, num2 = 7.5, num3 = 9.3;

    cout << "Average: " << average(num1, num2, num3) << endl;

    return 0;
}
