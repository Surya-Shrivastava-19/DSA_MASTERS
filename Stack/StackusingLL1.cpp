// STACK IMPLEMENTATION USING LINKED LIST ...BY SURYA SHRIVASTAVA.
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
template<class SS>
class Node {
    public:
    SS data;
    Node *next;
    Node(SS val) {
        data = val;
        next = NULL;
    }
};

template<class SS>
class STACK {
    Node<SS> *head;
    public:
    STACK() {
        head = NULL;
    }

    // PUSH FRONT IN STACK 
    void Push(SS val) {
        Node<SS>* newNode = new Node<SS>(val);
        if(head == NULL) {
            head = newNode;
        }else {
            newNode -> next = head;
            head = newNode;
        }
    }

    // POP FRONT IN STACK
    void Pop() {
        Node<SS>* temp;
        temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    // TOP IN  STACK
    SS Top() {
        return head -> data;
    }

    bool isEmpty() {
        if(head == NULL) {
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
    return 0;
}