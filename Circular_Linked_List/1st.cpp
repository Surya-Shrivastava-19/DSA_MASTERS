#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLL {
    Node* head;
    Node* tail;
    public:
    CircularLL() {
        head = tail = NULL;
    }

int insertAthead(int val) {
    Node *newNode = new Node(val);
    if(tail == NULL) {
        head = tail = newNode;
        tail -> next = head;
    }else {
        newNode -> next = head;
        head = newNode;
        tail -> next = head;
    }
}

int insertAttail(int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = tail = newNode;
        tail -> next = head;
    }else {
        tail -> next = newNode;
        tail = newNode;
        tail -> next = head;
    }
}

void DeleteAtHead() {
    if (head == NULL) {
        return;
    }else if (head == tail) {
        delete head;
        head = tail = NULL;
    }
    else {
        Node* temp = head;
        head = head -> next;
        tail -> next = head;
        temp -> next = NULL;
        delete temp;
    }
}

void DeleteAttail() {
    if (head == NULL) {
        return;
    }else if (head == tail) {
        delete tail;
        head = tail = NULL;
    }else {
        Node* temp = head;
        while (temp -> next != tail) {
            temp = temp -> next;
        }
        tail = temp;
        temp = temp -> next;
        tail -> next = head;
        temp -> next = NULL;
        delete temp;
    }
}

void PrintCircularLL() {
    if (head == NULL) {
        cout << "CIRCULAR LINKED LIST IS EMPTY";
        return;
    }
    cout << head -> data << " -> ";
    Node* temp = head -> next;
    while(temp != head) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << temp -> data << endl;
}
};
int main() {
    CircularLL cll;
    cll.insertAthead(100);
    cll.insertAthead(200);
    cll.insertAthead(300);
    cll.insertAthead(400);
    cll.insertAttail(500); 
    cll.insertAttail(600); 
    cll.insertAttail(700); 
    // cll.insertAttail(800); 
    cll.DeleteAtHead(); 
    cll.DeleteAttail();
    cll.PrintCircularLL();
    return 0;
}