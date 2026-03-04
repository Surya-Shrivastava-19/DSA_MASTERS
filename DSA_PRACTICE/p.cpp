#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr->show();   // Derived class function
}