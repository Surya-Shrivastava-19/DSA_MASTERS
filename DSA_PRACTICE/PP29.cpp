#include <iostream>  
using namespace std;
class A {
    public:
    int a;
};
class D : public A {
    public:
    int d;
};
class C : public A {
    public:
    int c;
};
class B : public D, public C {
    public:
    int b;
};
int main() {
    B obj;
    obj.D::a=40;
    obj.C::a=30;
    cout << obj.D::a << endl ;
    cout << obj.C::a << endl;
    return 0;
}