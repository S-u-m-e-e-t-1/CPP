#include <iostream>
using namespace std;

inline int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 5;

    cout << "Factorial: " << factorial(num) << endl;

    return 0;
}
