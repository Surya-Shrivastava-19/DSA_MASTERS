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
};
int main() {

}