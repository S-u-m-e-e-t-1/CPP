#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    

    int gcd = 0;
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    int lcm = (num1 * num2) / gcd;
    
    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;
    
    return 0;
}
