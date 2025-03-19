#include <iostream>
using namespace std;

inline int abs(int num) {
    return (num < 0) ? -num : num;
}

int main() {
    int num = -10;

    cout << "Absolute value: " << abs(num) << endl;

    return 0;
}
