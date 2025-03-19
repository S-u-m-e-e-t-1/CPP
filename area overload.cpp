#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

int main() {
    int side = 5;
    int length = 4, breadth = 6;

    cout << "Area of square: " << area(side) << endl;
    cout << "Area of rectangle: " << area(length, breadth) << endl;

    return 0;
}
