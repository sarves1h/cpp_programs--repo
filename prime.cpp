# include <iostream>
using namespace std ;
int main () {
    int n;
    cout << "number n = " ;
    cin >> n;
    for (int i=2 ; i<=n ; i++) {
        if (n%i==0) {
                cout << " i is not prime" << endl ;
                break ;
        } else if (n==2) {
                cout << " i is prime" << endl ;
                break ;
        }else {
                cout << " i is prime" << endl ;
                break ;
        }
 
        }
    return 0 ;

    }

