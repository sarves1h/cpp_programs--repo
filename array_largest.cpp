# include <iostream>
using namespace std ;
int main () {
    arr[10]={1,10,5,3,41,0} ;
   int largest = INT_MIN ;
        for(int i = 0 ; i<arr.size() ; i++){
            if(largest>arr[i]){
                largest=arr[i] ;
            }
        }
        cout<<"largest : "<<largest <<endl ;
    }