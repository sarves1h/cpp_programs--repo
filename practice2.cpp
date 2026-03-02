#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter your number n = " << endl;
    cin >> n;
    if (n <= 1) {
        cout << "your number is not prime" << endl;
    }
    else if (n == 2) {
        cout << "your number is prime" << endl;
    }
    else if {
        for (int i=2 ; i < n ; i++) {
            if (n % i == 0) {
                cout << "your number is not prime" << endl;
               
            } break ;
        }
    }  
    if (i == n) {
        cout << "your number is prime" << endl;
    }
    
        
    
    return 0;
}