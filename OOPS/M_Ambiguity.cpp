#include <iostream>
using namespace std;
class A {
    public:
    void show() {
        cout << "CLASS A SHOW..." << "\n";
    }
};
class B {
    public:
    void show() {
        cout << "CLASS B SHOW..." << "\n";
    }
};
class C: public A, public B {
    public:
    void func() {
        cout << "THIS IS A FUNCTION." << "\n";
    }
};
int main() {
    C obj;
    obj.A::show();
    obj.B::show();
    return 0;
}
