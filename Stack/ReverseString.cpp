// Reverse a string using stack ...
// Time Complexity : O(n)
#include <iostream>
#include <stack>
#include <string>
using namespace std;
string Reverse_String(string str) {
    string ans;
    stack<char> Stack;
    for (int i=0; i < str.size(); i++) {
        Stack.push(str[i]);
    }
    while(!Stack.empty()) {
        char top = Stack.top();
        ans = ans + top;
        Stack.pop();
    }
    return ans;
}

int main() {
    string str;
    cout << "Enter a string : ";
    cin >> str;
    string ans = Reverse_String(str);
    cout << "After Implementation of stack reverse string will be : " << ans;
    return 0;
}