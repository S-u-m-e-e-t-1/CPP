#include <iostream>
using namespace std;

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10, num2 = 15;

    cout << "Maximum: " << max(num1, num2) << endl;

    return 0;
}
