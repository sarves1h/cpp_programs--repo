#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    for (int j = 1; j <= strs[0].size(); j++) {

        for (int i = 0; i < strs.size() - 1; i++) {

            if (strs[i].substr(0, j) != strs[i + 1].substr(0, j)) {

                return strs[0].substr(0, j - 1);
            }
        }
    }

    return strs[0];
}

int main() {

    vector<string> strs = {"flower", "flow", "flight"};

    string answer = longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << answer << endl;

    return 0;
}