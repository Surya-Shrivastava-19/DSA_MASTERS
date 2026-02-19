void Enqueue(int val) {
    Node* newNode = new Node(val);
    if (head == NULL){
        head = tail = newNode;
    }
    tail -> next = newnode;
    tail = newNode;
}

void Dequeue() {
    if (head == NULL){
        cout << "queue is empty";
        return;
    }else {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    } 
}

void Front() {
    if (head == NULL){
        cout << "queue is empty";
        return;
    }
    return head -> data;
}