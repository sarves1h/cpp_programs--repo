# include <iostream> 
# include <vectors> 
# include <climits>
using namespace std ; 
int main () {
    int currsum = 0  , maxsum = INT_MIN ;
    for (int value : nums ){
        currsum += val ;
        maxsum = max( currsum , maxsum ) ;
        if (currsum < 0 ){
            currsum = 0 ;

        }

    }
    cout << maxsum << endl ;
    return 0 ;
}
