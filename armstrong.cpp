#include<iostream>
using namespace std;

#include <iostream>

int main() {
    int num,n1, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    n1 = num;

    while(num != 0) {
        rem = num % 10;
        sum += rem * rem * rem;
        num/= 10;
    }

    if (sum == n1) {
        cout << n1 << " is an Armstrong number." << std::endl;
    } else {
        cout << n1<< " is not an Armstrong number." << std::endl;
    }

    return 0;
}
