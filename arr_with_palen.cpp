class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int m = arr.size() , rev = 0  ;
        for(int i = 0 ; i< arr.size() ; i++){
            while(arr[i]>0){
                int d = arr[i]%10 ;
                rev = rev*10+d ;
                if (rev == arr[i]){
                    return true ; 
                }
                else{
                    return false ;
                }
};