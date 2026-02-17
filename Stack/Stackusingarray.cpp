#include <iostream>
# define max 5;
using namespace std;

void Push(int val) {
    if (top == max-1) {
        cout << "STACK OVERFLOW..." << "\n";
        return;
    }else {
        top = top + 1;
        arr[top] = val;
    }
}

int Pop() {
    int data;
    if (top == -1) {
        cout << "STACK IS EMPTY..." << "\n";
        return -1;
    }
    data = arr[top];
    top = top - 1;
    return data;
}

void change(int val, int idx) {
    if (top == -1) {
        cout << "STACK IS EMPTY..." << "\n";
        return;
    }else if (idx>=0 && idx<=max-1) {
        arr[idx] = val;
    }else {
        cout << "INVALID POSITION ...";
        return;
    }
}
int main() {
    int arr[max];

}