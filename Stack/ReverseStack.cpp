// Reversed a stack using Recursion ...
// Time Complexity : O(n);
#include <iostream>
#include <stack>
using namespace std;
void Push_At_Bottom(stack<int>&, int);

void Print_Stack(stack<int> Stack) {
    cout << "After Reversed a Stack : " << "\n";
    while(!Stack.empty()){
        cout << Stack.top() << "\n";
        Stack.pop();
    }
}

void Reverse_Stack(stack<int> Stack) {
    if(Stack.empty()) {
        return;          // Base case
    }
    int temp = Stack.top();
    Stack.pop();
    Reverse_Stack(Stack);
    Push_At_Bottom(Stack, temp);
}

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
    int n;
    cout << "Enter elements in stack : " << "\n";
    for(int i=0; i < 5; i++) {
        cin >> n;
        Stack.push(n);
    }
    // Stack.push(100);
    // Stack.push(200);
    // Stack.push(300);
    // Stack.push(400);
    // Stack.push(500);
    // Stack.push(600);
    Reverse_Stack(Stack);
    Print_Stack(Stack);
    return 0;
}