// STACK USING VECTOR WITH CLASS TEMPLATE ... .BY SURYA SHRIVASTAVA.
#include <iostream>
#include <vector>
#include <string>
using namespace std;
template<class SURYA>
class STACK {
    vector<SURYA> vec;
    public:
    void Push(SURYA val) {   // O(1)
        vec.push_back(val);
    }

    void Pop() {   // O(1)
        if (isEmpty()) {
            cout << "`STACK IS EMPTY`" << "\n";
            return;
        }
        vec.pop_back();
    }

    SURYA Top() {    // O(1)
        // if (isEmpty()) {
        //     cout << "`STACK IS EMPTY`" << "\n";
        //     return -1;
        // }
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
    STACK <char> S1;
    S1.Push('A');
    S1.Push('Y');
    S1.Push('R');
    S1.Push('U');
    S1.Push('S');
    cout << "Top : "<< S1.Top() << "\n";
    while (S1.isEmpty() == false) {
        cout << S1.Top() << " ";
        S1.Pop();
    }
    cout << endl;
    return 0;
}