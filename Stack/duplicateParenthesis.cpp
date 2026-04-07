#include<iostream>
#include<stack>
#include <string>
using namespace std;
bool duplicateParenthesis(string str) {
    stack<char> Stack;
    for(int i=0; i<str.size(); i++) {
        int ele = str[i];
        if(ele=='(' ||
           ele=='+' || 
           ele=='-' ||
           ele=='*' ||
           ele=='/' ||
           (ele>='a' &&
           ele<='z')) 
           {
            Stack.push(ele);
           }
           else if(ele == ')') {
            if(Stack.top() == '('){
                return false;
            }else {
                while(Stack.top()!='('){
                    Stack.pop();
                }
                Stack.pop();
                if(Stack.empty()) {
                return true;
                }
            }
        }
    }
}
int main() {
    string str;
    cout << "ENTER A STRING: ";
    cin >> str;
    bool dup = duplicateParenthesis(str);
    if(dup == true) {
        cout << "EXPRESSION IS NOT DUPLICATE PARENTHESIS";
    } else {
        cout << "EXPRESSION IS DUPLICATE PARENTHESIS";
    }
    return 0;
}