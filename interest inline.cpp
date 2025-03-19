#include <iostream>
using namespace std;

inline double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

int main() {
    double principal = 1000.0, rate = 5.0, time = 2.5;

    cout << "Simple Interest: " << calculateSimpleInterest(principal, rate, time) << endl;

    return 0;
}
