#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, m;
    int a[20], b[20];

    cout << "Enter the number of elements in array 1: ";
    cin >> n;

    cout << "Enter array 1: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the number of elements in array 2: ";
    cin >> m;

    cout << "Enter array 2: ";
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> arr;

    // Put array 1 into arr
    for(int i = 0; i < n; i++) {
        arr.push_back(a[i]);
    }

    // Put array 2 into arr
    for(int j = 0; j < m; j++) {
        arr.push_back(b[j]);
    }

    // Sort the combined array
    sort(arr.begin(), arr.end());

    int size = arr.size();
    double median;

    if(size % 2 == 1) {
        median = arr[size / 2];
    }
    else {
        median = (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }

    cout << "Median = " << median << endl;

    return 0;
}