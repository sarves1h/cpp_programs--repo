# include <iostream>
using namespace std ;
void swap (int &a , int &b ) ;
int main () {
    int a , b ;
    cout << " enter your two nubers : " ;
    cin >> a >> b ;
    cout << "before swap"<<" a= " << a << " b= " << b << endl ;

    
    
    swap (a ,b );
    cout << "after swap" <<"a= " << a << " b= " << b << endl ;

}
void swap (int &a , int &b ){
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;
}
