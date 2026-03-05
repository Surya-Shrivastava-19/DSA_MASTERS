#include <iostream>
using namespace std;
class Shape {
    public:
    virtual void draw() = 0;
    virtual void display() = 0; 
};
class Circle: public Shape {
    public:
    void draw() {
        cout << "DRAW A CIRCLE" << "\n";
    }
    void display() {
        cout << "DISPLAY SHAPE" << "\n";
    }
};
int main() {
    Circle c1;
    c1.draw();
    c1.display();
    return 0;
}