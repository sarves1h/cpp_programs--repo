# include <iostream>
using namespace std ;
int main () {
    int n , i=1 ;
    int sum = 0;
    cout << " number n = " ;
    cin >> n ;
    while (i<=n) {
        sum += i ;
        i++;
    }
    cout << " sum is : " << sum << endl ;
        
        return 0 ;
}
    