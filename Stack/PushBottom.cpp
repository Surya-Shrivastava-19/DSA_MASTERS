// Push at Bottom of Stack Using Backtracking .
// Time Complexity : O(n)
#include <iostream>
#include <stack>
using namespace std;
void Push_At_Bottom(stack<int> &Stack, int val) {
    if (Stack.empty()) {
        Stack.push(val);     // push at top = push at bottom
        return;
    }
    int temp = Stack.top();
    Stack.pop();

    Push_At_Bottom(Stack, val);
    Stack.push(temp);
}

int main() {
    stack<int> Stack;
    Stack.push(700);
    Stack.push(600);
    Stack.push(500);
    Stack.push(400);
    Stack.push(300);
    Stack.push(200);
    Stack.push(100);
    int n;
    cout << "Enter the value to be pushed onto the Bottom of Stack : ";
    cin >> n;
    Push_At_Bottom(Stack, n);
    cout << "Stack after pushing in the bottom : " << "\n";
    while(!Stack.empty()) {
        cout << Stack.top() << "\n";
        Stack.pop();
    }
    return 0;
}