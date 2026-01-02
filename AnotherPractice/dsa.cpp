#include <iostream>
using namespace std;
struct BST {
    int data;
    BST *left, *right, *level;
};

BST *root, *temp, *ttemp, *parent;

void init() {
    root = temp = ttemp = NULL;
}

void create_root(int x) {
    root = new BST;
    root -> data = x;
    root -> left = NULL;
    root -> right = NULL;
}

void Add_Node(int x) {
    temp = root;
    while(temp != NULL) {
        ttemp = temp;
        if(x < temp -> data) {
            temp = temp -> left;
        }else {
            temp = temp -> right;
        }
    }

    BST *p = new BST;
    p -> data = x;
    p -> left = p -> right = NULL;

    if(x < ttemp -> data) {
        ttemp -> left = p;
    }else {
        ttemp -> right = p;
    }
}

void Inorder(BST *p) {
    if(p != NULL) {
        Inorder(p -> left);
        cout << p -> data << " ";
        Inorder(p -> right);
    }
}

void Preorder(BST *p) {
    if(p != NULL) {
        cout << p -> data << " ";
        Preorder(p -> left);
        Preorder(p -> right);
    }
}

void Postorder(BST *p) {
    if(p != NULL) {
        Postorder(p -> left);
        Postorder(p -> right);
        cout << p -> data << " ";
    }
}

// COUNT NUMBER OF NODE
void Count_Nodes(BST *p) {
    int count = 0;
    if(p != NULL) {
        count ++;
        Count_Nodes(p -> left);
        Count_Nodes(p -> right);
    }
}

int main() {
    init();
    create_root(50);
    Add_Node(30);
    Add_Node(70);
    Add_Node(20);
    Add_Node(40);
    Add_Node(60);
    Add_Node(80);
    Add_Node(20);
    Add_Node(300);
    Add_Node(30);
    cout << "INORDER TRAVERSAL : ";
    Inorder(root);
    cout << "\n";
    cout << "PREORDER TRAVERSAL : ";
    Preorder(root);
    cout << "\n";
    cout << "POSTORDER TRAVERSAL : ";
    Postorder(root); 
    cout << "\n";

}