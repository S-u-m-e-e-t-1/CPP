#include <iostream>
using namespace std;

int sum(int num1, int num2, int num3 = 0, int num4 = 0) {
    return num1 + num2 + num3 + num4;
}

int main() {
    int num1, num2, num3, num4;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    cout << "Sum: " << sum(num1, num2) << endl;
    cout << "Sum: " << sum(num1, num2, num3) << endl;
    cout << "Sum: " << sum(num1, num2, num3, num4) << endl;

    return 0;
}
