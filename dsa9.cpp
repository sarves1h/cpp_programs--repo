#include <iostream>
using namespace std;

int main() {

    int a, reverse = 0, b;
    
    cout << "Enter the number you want to check: ";
    cin >> a;

    int original = a;

    while (a > 0) {

        b = a % 10;
        reverse = reverse * 10 + b;
        a = a / 10;
    }

    if (original == reverse) {
        cout << "It is palindrome";
    }
    else {
        cout << "Not a palindrome";
    }

    return 0;
}