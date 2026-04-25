#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue{
    Node *head;
    Node *tail;
    public:
    Queue() {
        head = tail = NULL;
    }
    void push(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = tail -> next;
        }
    }
    void pop() {
        if(head == NULL){
            cout << "QUEUE IS EMPTY";
            return;
        }else {
            Node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
        }
    }
    int front() {
        if(head == NULL) {
            cout << "QUEUE IS EMPTY";
            return -1;
        }
        return (head -> data);
    }
    bool empty() {
        return (head == NULL);
    }
};
int main() {
    Queue Q1;
    Q1.push(1);
    Q1.push(2);
    Q1.push(3);
    Q1.push(4);
    Q1.push(5);
    while(!empty()) {
        cout << Q1.front() << "\n";
        Q1.pop();
    }
    return 0;
}