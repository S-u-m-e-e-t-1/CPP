#include<iostream>
using namespace std;

int main() {
    int number, reverse = 0;

cout << "Enter a number: ";
cin >> number;

    while (number != 0) {
        int rem = number % 10;
        reverse = reverse * 10 + rem;
        number /= 10;
    }

   cout << "The reversed number is: " << reverse<< endl;

    return 0;
}
