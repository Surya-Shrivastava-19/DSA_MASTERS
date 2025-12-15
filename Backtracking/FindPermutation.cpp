// FIND AND PRINT ALL PERMUTATION(ARRANGEMENT) OF A GIVEN STRING ....By Surya Shrivastava
// TIME COMPLEXITY : O(n!)
// SPACE COMPLEXITY : O(n)
#include <iostream>
#include <string>
using namespace std;
void Permutation(string str, string ans) {
    int n = str.size();
    if (str.size() == 0) {
        cout << ans << "\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        char ch = str[i];
        string Nextstr = str.substr(0, i) + str.substr(i + 1, n - i - 1);
        Permutation(Nextstr , ans + ch);
    }
    // "abcdefgh" , i=2 (delete c) => str.substr(0 , i(length)) + str.substr(i+1, n-i-1);
}
void FindPermutation(string str) {
    int f = 1;
    for (int i = 1; i <= str.size(); i++) {
        f = f * i;
    }
    cout << "THEIR ARE " << f << " PERMUTATIONS ARE POSSIBLES IN THIS STRING." << "\n";
    return;
}
int main() {
    string str;
    cout << "ENTER A STRING : ";
    cin >> str;
    string ans = "";
    FindPermutation(str);
    Permutation(str, ans);
    return 0;
}