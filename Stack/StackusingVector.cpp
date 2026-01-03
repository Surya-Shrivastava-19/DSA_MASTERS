// STACK USING VECTOR BY ....SURYA SHRIVASTAVA.
#include <iostream>
#include <vector>
using namespace std;
class STACK {
    vector<int> vec;
    public:
    void Push(int val) {   // O(1)
        vec.push_back(val);
    }

    void Pop() {   // O(1)
        if (isEmpty()) {
            cout << "`STACK IS EMPTY`" << "\n";
            return;
        }
        vec.pop_back();
    }

    int Top() {    // O(1)
        if (isEmpty()) {
            cout << "`STACK IS EMPTY`" << "\n";
            return -1;
        }
        int lastidx = vec.size() - 1;
        return vec[lastidx];
    }

    bool isEmpty() {
        if (vec.size() == 0) {
            return true;
        }else {
            return false;
        }
    }
};
int main() {
    STACK S1;
    S1.Push(3);
    S1.Push(2);
    S1.Push(1);
    S1.Push(4);
    cout << "Top : "<< S1.Top() << "\n";
    while (S1.isEmpty() != true) {
        cout << S1.Top() << " -> ";
        S1.Pop();
    }
    cout << endl;
    cout << "Top : "<< S1.Top() << "\n";
    return 0; 
}