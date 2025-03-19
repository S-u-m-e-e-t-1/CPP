#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;

    cout << "Enter ten numbers:\n";

    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> num;
        sum += num;
    }

    std::cout << "The sum of the ten numbers is: " << sum << std::endl;

    return 0;
}
