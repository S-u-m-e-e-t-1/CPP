#include <iostream>
using namespace std;

inline int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 7;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
