#include <iostream>
#include <stack>
using namespace std;
bool validParenthesis(string str) {
    stack<char> stack;
    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        if(ch == '(' ||
           ch == '{' ||
           ch == '[')
           {
            stack.push(ch);
           }
        else if(ch == '}' ||
                ch == ']' ||
                ch == ')')
                {
                    if(stack.empty()) {
                        return false;
                    }else if (stack.top() == ch) {
                        stack.pop();
                    }else{
                        return false;
                    }
                }
    }
    if(stack.empty()) {
        return true;
    }else{
        return false;
    }
}

int main() {
    string str;
    cout << "ENTER A STRING : ";
    cin >> str;
    bool value = validParenthesis(str);
    if (value == true) {
        cout << "IT IS A VALID PARENTHESIS." << "\n";
    }else {
        cout << "IT IS NOT A VALID PARENTHESIS." << "\n";
    }
    return 0;
}