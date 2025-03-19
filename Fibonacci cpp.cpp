#include<iostream>
using namespace std;


#include <iostream>

int main() {
    int n;
    
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    
    int x = 0, y = 1;
    
    cout << "Fibonacci series up to " << n << " terms:\n";
    cout << x << " " << y << " ";
    
    for (int i = 3; i <= n; i++) {
        int sum = x + y;
        cout << sum << " ";
        x = y;
        y = sum;
    }
    
    cout << endl;
    
    return 0;
}

