#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number n = ";
    cin >> n;

    if (n <= 1) {
        cout << "Your number is not prime" << endl;
    }
    else if (n == 2) {
        cout << "Your number is prime" << endl;
    }
    else {
        int i;
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                cout << "Your number is not prime" << endl;
                break;
            }
        }

        if (i == n) {
            cout << "Your number is prime" << endl;
        }
    }

    return 0;
}