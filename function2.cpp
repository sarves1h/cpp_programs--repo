# include <iostream>
using namespace std ;



int minoftwo( int a , int b) {
    if (a<b){
        return a ;

    }
    else { 
        return b ;

    }

}
int main () { 
    cout << "minimum of two values = " << minoftwo (7 , 9 ) << endl ;
    return 0 ;
    
}
