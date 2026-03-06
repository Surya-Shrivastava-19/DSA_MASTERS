#include <iostream>
using namespace std;
class Shape {
    public:
    virtual void draw() = 0;
};
class Circle: public Shape {
    public:
    void draw() {
        cout << "Circle is drawing." << "\n";
    }
};
class Square: public Shape {
    public:
    void draw() {
        cout << "Square is drawing." << "\n";
    }
};
class Rectangle: public Shape {
    public:
    void draw() {
        cout << "Rectangle is drawing." << "\n";
    }
};
int main() {
    Shape *s;
    Circle c1;
    s = &c1;
    s->draw();
    Square s1;
    s = &s1;
    s->draw();
    Rectangle r1;
    s = &r1;
    s->draw();
    return 0;
}