#include <iostream>
using namespace std;

int main() {
    int n[20], a;

    cout << "enter the size of the array : ";
    cin >> a;

    cout << "enter the array : ";

    for (int i = 0; i < a; i++) {
        cin >> n[i];
    }

    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {

            if (n[i] == n[j]) {

                for (int k = j; k < a - 1; k++) {
                    n[k] = n[k + 1];
                }

                a--;
                j--;
            }
        }
    }

    for (int i = 0; i < a; i++) {
        cout << n[i] << " ";
    }

    return 0;
}