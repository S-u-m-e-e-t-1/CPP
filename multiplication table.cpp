#include<iostream>
using namespace std;


#include <iostream>

#include <iostream>

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Multiplication table of " << number << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 0;
}

