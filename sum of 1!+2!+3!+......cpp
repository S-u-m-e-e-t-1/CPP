#include<iostream>
using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num, sum = 0;

     cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        sum += factorial(i);
    }

    cout << "sum of 1!+2!+3!+..... " << num << "! is: " << sum << endl;

    return 0;
}
