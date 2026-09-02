# include <iostream>
using namespace std ;
int main () {
    int nums[20] , a , n ;
    cout<<"enter how many number you are about to enter :" <<endl ;
    cin>>n ;
    cout<<"enter the numbers you want to enter" ;
    for (int i = 0 ; i<n ; i++){
        cin>>nums[i] ;
    } 
    cout<<"enter the target : " <<endl ;
    cin>> a ;
    for (int i = 0 ; i<n ; i++ ){
        for(int j=i+1 ; j<n ; j++ ){
        if (nums[i] + num[j]==a){
            cout <<j,i ;
       }
        else {
            cout<<"target not found" ;
        }
        }
    } 
    return 0 ;
}