#include <iostream>
using namespace std ;
int main () {
    int n ;
    int sum =0;
    cout <<"  enter number n : ";
    cin >>n ;
    for (int i =3 ; i <=n ; i++ ) {
        if (i%3 ==0 ) {
            sum = sum +i ;
            
    
        }

    }
    cout << "Sum of numbers divisible by 3 from 1 to " << n << " is: " << sum << endl ; // for loop ke bahar rakhne se ye repeat nhi karega output
    return 0 ;
}