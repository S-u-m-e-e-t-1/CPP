#include <iostream>
using namespace std;

int volume(int side) {
    return side * side * side;
}

int volume(int length, int width, int height) {
    return length * width * height;
}

int main() {
    int side = 3;
    int length = 4, width = 5, height = 6;

    cout << "Volume of cube: " << volume(side) << endl;
    cout << "Volume of rectangular prism: " << volume(length, width, height) << endl;

    return 0;
}
