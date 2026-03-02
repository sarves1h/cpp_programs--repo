#include <iostream>
using namespace std ;
int main () {
    int n;
    int sum = 0; // Declare sum before the for loop
    cout << "number n = ";
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << "sum is : " << sum;
    return 0 ;
}
