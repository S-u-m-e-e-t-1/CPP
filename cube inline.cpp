#include <iostream>
using namespace std;

inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num = 5;

    cout << "Cube: " << cube(num) << endl;

    return 0;
}
