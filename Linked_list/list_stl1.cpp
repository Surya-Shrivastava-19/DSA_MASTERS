#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void PRINT_LIST(list<char> ll) {
    list<char> :: iterator itr;
    itr = ll.begin();
    while(itr != ll.end()) {
        cout << (*itr) << " -> ";
        itr ++;
    }
    cout << "BHAI";
}
int main() {
    list<char> ll;
    ll.push_back('S');
    ll.push_back('U');
    ll.push_back('R');
    ll.push_back('Y');
    ll.push_back('A');
    PRINT_LIST(ll);
}