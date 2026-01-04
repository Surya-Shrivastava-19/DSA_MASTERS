#include <iostream>
#include <list>
#include <iterator>
using namespace std;
template<class SS>
class STACK {
    list<SS> ll;
    public:
    void Push(SS val) {
        ll.push_front(val);
    }

    SS Pop() {
        if(isEmpty()) {
            cout << "`STACK IS EMPTY`" << "\n";
            return -1;
        }
        ll.pop_front();
    }

    SS Top() {
        if(isEmpty()) {
            cout << "`STACK IS EMPTY`" << "\n";
            return -1;
        }
        return ll.front();
    }

    bool isEmpty() {
        if(ll.size() == 0) {
            return true;
        }else{
            return false;
        }
    }
};
int main() {
    STACK<int> S1;
    S1.Push(100);
    S1.Push(200);
    S1.Push(300);
    S1.Push(400);
    S1.Push(500);
    S1.Push(600);
    S1.Push(700);
    while(S1.isEmpty() != true) {
        cout << (S1.Top()) << " --> ";
        S1.Pop();
    }
    cout << "NULL" << "\n";
}