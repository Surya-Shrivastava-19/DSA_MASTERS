#include <iostream>
using namespace std;
class Shape {
    public: // 
    virtual void draw() = 0;  // PURE VIRTUAL FUNCTION OR ABSTRACT FUNCTION
};
class Circle : public Shape {
    public:
    void draw() {
        cout << "Draw Circle..." << "\n";
    }
};
class Square : public Shape {
    public:
    void draw() {
        cout << "Draw Square..." << "\n";
    }
};
int main() {
    Circle c1;
    // Shape *s = new Square;
    // Shape *c = new Circle;
    c1.draw();
    Square s1;
    s1.draw();
    // Shape s1;  HUM ABSTRACT CLASS KA OBJECT NAHI BANA SAKTE
    // s1.draw();
    return 0;
}
// an abstract class which has a mixture of pure virtual fn and concreat fn. However if we want to make na interface in c++ the abstract class should only contain pure virtual fn it should also not have any data member..
// DIFFERENCE BETWEEN ABSTRACT CLASS AND INTERFACE..
// an abstract class is a contract class in which few function are implemented and few fn are to be implemented in future..
// interface is a swipt form of abstract class in which all the fn are left to be implemented by it subsetter..
// abstract class can have data member 
// cannot have data member..
// but the implemented behaviour and exposed data member can be used by dynamic polymorphisms by the derived classes 
// creating an object of interface is not logical because it has no data members and no implemented function..
// 