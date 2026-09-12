# include <iostream> 
using namespace std ; 
int main () {
    int n[20] , m ; 
    cout<< "enter the size of the array : ";
    cin>> m  ; 
    cout << "enter the array you want to enter  : " ;
    for (int i = 0 ; i< m ; i++ ){
        cin>> n[i] ;
    } int distance = INT_MIN ;
    for {int i = 0 ; i<m ; i++ }{
        for(int j = i+1 ; j<m ; j++){
            for(int k = i+2 ; k< m ; k++){
                if(n[i] == n[j] == n[k]){
                    distance = min(distance , (abs(i-j)+abs(j-k)+abs(k-i))) ;
                }
 
            }
        }
    } 
    if (distance == INT_MAX) {
        return -1;
    }
    return distance ;
}