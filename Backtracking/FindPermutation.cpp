#include <iostream>
using namespace std;
void Permutation(string str, string ans) {
    n = str.size();
    for (i = 0; i < n; i++) {
        
    }
    // "abcdefgh" , i=2 (delete c) => str.substr(0 , i(length)) + str.substr(i+1, n-i-1);
}
void FindPermutation(string str) {
    int f = 1;
    for (int i = 1; i <= str.size(); i++) {
        f = f * i;
    }
    cout << "THEIR ARE " << f << " PERMUTATIONS ARE POSSIBLES IN THIS STRING." << "\n";
}
int main() {
    string str;
    cout << "ENTER A STRING : ";
    cin >> str;
    string ans = "";
    FindPermutation(str);
    Permutation(str, ans);
}