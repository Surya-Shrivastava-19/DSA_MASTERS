#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main() {
    list<int> ll;
    ll.push_front(2); // 1
    ll.push_front(1); // 1 -> 2

    ll.push_back(3); // 1 -> 2 -> 3
    ll.push_back(4); // 1 -> 2 -> 3 -> 4
    ll.push_back(6);
    list<int>::iterator itr;
    for (itr = ll.begin(); itr != ll.end(); itr++) {
        cout << (*itr) << " -> ";
    }
    cout << "NULL" << "\n";
    cout << "SIZE OF A LINKED LIST : " << ll.size() << "\n";
    cout << "FRONT VALUE OF A LINKED LIST : " << ll.front() << "\n";
    cout << "BACK VALUE OF A LINKED LIST : " << ll.back() << "\n";
    //
    ll.insert(ll.begin(), 100); //*---<>---*//
    //
    ll.pop_front();
    ll.pop_back();
    return 0;
}