// FIND & PRINT ALL SUBSET OF A GIVEN STRING ....By Surya Shrivastava
#include <iostream>
#include <string>
using namespace std;
void StringSubset(string str, string subset) {
    if(str.size()  == 0) {
        cout << subset << "\n";
        return;
    }
    char ch = str[0];
    // yes choice
    StringSubset(str.substr(1, str.size() - 1), subset + ch); 
    // No choice
    StringSubset(str.substr(1, str.size() - 1), subset);
}
int main() {
    string str;
    cout << "ENTER A STRING : ";
    cin >> str;
    string subset = "";
    StringSubset(str, subset);
}