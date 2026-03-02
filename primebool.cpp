#include <iostream>
using namespace std;
int main() {
    int n;
    cout << " number n" << endl;
    cin >> n;
    bool is_prime = true;
    if (n <= 1) {
        is_prime = false;
    } else if (n == 2) {
        is_prime = true;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
    }
    if (is_prime) {
        cout << n << " is prime." << endl;
    } else {
        cout << n << " is not prime." << endl;
    }
    return 0;
}
    
    



