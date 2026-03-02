# include <iostream>
using namespace std ;
int factX( int n) {
    int f = 1 ;
    for(int i = 1 ; i <=n ; i++ ){
        f *=i ;
        
    }
    return f ;
}

int main () {
    cout<< "your factorial is= " << factX (9)<< endl ;
    return 0 ;
}
    

