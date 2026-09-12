# include <iostream> 
# include <vector>
#include <climits>
using namespace std ;
int main() {
    vector <int>nums ;
        int m = nums.size();
        int best = INT_MAX;

        for (int i = 0; i < m; i++) {

            int rev = 0;
            int temp = nums[i];

            while (temp != 0) {
                int d = temp % 10;
                rev = rev * 10 + d;
                temp /= 10;
            }

            for (int j = i + 1; j < m; j++) {

                if (rev == nums[j]) {
                    int dis = j - i;
                    best = min(best, dis);
                    break;
                }
            }
        }

        if (best == INT_MAX) {
            return -1;
        }

        return best;
}

