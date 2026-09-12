// xample 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "enter the number you want to reverse : ";
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    vector<int> arr;

    while (n != 0) {
        arr.push_back(n % 10);
        n = n / 10;
    }

    int m = arr.size();

    if (arr[0] == 0) {
        arr.erase(arr.begin());
    }

    m = arr.size();
    long long ans = 0;

    if (arr[0] > 0) {
        for (int i = 0; i < m; i++) {
            cout << arr[i];
        }
    }
    else {
        for (int i = 0; i < m; i++) {
            ans = ans * 10 + arr[i];

             if (ans > 2147483647LL || ans < -2147483648LL) {
                return 0;
        }
        cout << ans;
    }

    return 0;
}
