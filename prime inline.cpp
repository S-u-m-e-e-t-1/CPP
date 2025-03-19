#include <iostream>
using namespace std;

inline bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num = 17;

    if (isPrime(num))
        cout << num << " is prime." << endl;
    else
        cout << num << " is not prime." << endl;

    return 0;
}
