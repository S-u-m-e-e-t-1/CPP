#include<iostream>
using namespace std;


int main() {
    int number;
    float factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    cout << "The factorial of " << number << " is: " << factorial << std::endl;

    return 0;
}

