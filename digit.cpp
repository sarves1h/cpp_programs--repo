#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    // Convert negative number to positive
    if (num < 0) num = -num;

    // Loop to extract and sum digits
    for (; num > 0; num /= 10) {
        int digit = num % 10;
        sum += digit;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}

