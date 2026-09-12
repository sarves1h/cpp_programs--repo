#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n[20], k, le, se, m;

    cout << "enter the no of elements in the array : ";
    cin >> m;

    cout << "enter the k : ";
    cin >> k;

    cout << "enter the array : ";

    for(int i = 0; i < m; i++) {
        cin >> n[i];
    }

    le = n[0];

    for(int i = 0; i < m; i++) {

        // maximum from n[0] to n[i]
        le = max(le, n[i]);

        // minimum starts from n[i]
        se = n[i];

        // find minimum from n[i] to n[m-1]
        for(int j = i; j < m; j++) {
            se = min(se, n[j]);
        }

        // check after finding the complete minimum
        if(le - se <= k) {
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}