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
//  apna approach just to check first two of the elements element ;;;
//  for(int i = 0; i < strs.size()-2; i++) { 
            
//             if (strs[i].substr(0, 2) == strs[i+1].substr(0, 2) && 
//                 strs[i+1].substr(0, 2) == strs[i+2].substr(0, 2)) {
                
//                 return strs[i].substr(0, 2); 
//             } 
//             else { 
//                 return " "; 
//             } 
//         }

//         return ""; 

// arr[i].substr(0, 2) access krta hai element ke first do element ko 
// aur agr do loop lga de aur fir aisa kre ki 
// arr[i].substr(0, j) to ye saare element ke element ko check karega !!
// somwhat like this -->
// for(int i = 0 ; i<strs.size()-2 ; i++ ){ 
//     for (int j = 1 ; j<strs[i].size() ; j++){
//     if (strs[i].substr(0, j) == strs[i+1].substr(0, j) && strs[i+1].substr(0, j) == strs[i+2].substr(0, j)) { 
//         return strs[i].substr(0, j); } 
//         else{ return " " ; }