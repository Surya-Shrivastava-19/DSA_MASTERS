// STOCK SPAN PROBLEM ...
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void Stock_Span(vector<int> stock, vector<int> Span) {

    stack<int> Stack;
    Span[0] = 1;
    Stack.push(0);

    for (int i=1; i < stock.size(); i++) {
        int currPrice = stock[i];
        while(!Stack.empty() && currPrice >= stock[Stack.top()]) {
            Stack.pop();
        }
        if(Stack.empty()) {
            Span[i] = i + 1;
        }else {
            int prevHigh = Stack.top();
            Span[i] = i - prevHigh;
        }
        Stack.push(i);
    }
    
    cout << "Span = [";
    for(int i=0; i < Span.size(); i++) {
        cout << Span[i] << ", ";
    }
    cout << "]";
}

int main() {
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100};
    vector<int> Span = {0, 0, 0, 0, 0, 0, 0};
    Stock_Span(stock, Span);
    return 0;
}