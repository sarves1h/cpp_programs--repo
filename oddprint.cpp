#include <iostream>
using namespace std ;
int main () {
    int n;
    // Declare sum before the for loop
    cout << "number n = ";
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        cout << i << " " ;
         }
    return 0 ;
}