#include <iostream>
#include <string>
using namespace std;

string concat(string str1, string str2) {
    return str1 + str2;
}

string concat(string str1, string str2, string str3) {
    return str1 + str2 + str3;
}

int main() {
    string s1 = "Hello";
    string s2 = " World";
    string s3 = "!";

    cout << "Concatenated string: " << concat(s1, s2) << endl;
    cout << "Concatenated string: " << concat(s1, s2, s3) << endl;

    return 0;
}
