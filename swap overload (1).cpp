#include <iostream>
using namespace std;

// Swap integers
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap doubles
void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

// Swap characters
void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

// Swap strings
void swap(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    double num3 = 2.5, num4 = 4.7;
    char char1 = 'A', char2 = 'B';
    string str1 = "Hello", str2 = "World";

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "num3 = " << num3 << ", num4 = " << num4 << endl;
    cout << "char1 = " << char1 << ", char2 = " << char2 << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    swap(num1, num2);
    swap(num3, num4);
    swap(char1, char2);
    swap(str1, str2);

    cout << "\nAfter swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "num3 = " << num3 << ", num4 = " << num4 << endl;
    cout << "char1 = " << char1 << ", char2 = " << char2 << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}
