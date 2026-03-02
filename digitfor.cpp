# include <iostream>
using namespace std ;
int sumofdigits(int num) {
    int sum = 0 ;
    for ( ;  num > 0 ; num /= 10) {
        int digit= num % 10 ;
        sum +=digit ;
    }
    return sum;
}
int main () { 
    int n ;
    cout << " enter your number n = " << endl ;
    cin >> n; // we dont need to initialise since we are adding number or inputting our number 
    int result = sumofdigits( n ) ;
    cout << " sum of digits = " << result << endl ;
    return 0 ;


}