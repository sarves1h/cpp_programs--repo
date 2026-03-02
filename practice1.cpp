#include <iostream> 
using namespace std ;
int main () {
    int n , sum= 0 ;
    cout<< "int n = "<< endl ;
    cin>> n ;
    for ( int i = 1 ; i<= n ; i++) {
        
        sum += i;
        cout << " your sum is = " << sum << endl ;
        
    }return 0 ;

}