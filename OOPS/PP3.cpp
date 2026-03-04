#include <iostream>
using namespace std;
template<class T>
class Rectangle {
    private:
    T length;
    T breadth;
    public:
    Rectangle(T a, T b) {
        length = a;
        breadth = b;
    }
    T Area() {
        return (length*breadth);
    }
    T Perimeter() {
        return 2*(length+breadth);
    }
};
int main() {
    Rectangle<int> R1(2,3);
    cout << R1.Area() << endl;
    cout << R1.Perimeter() << endl;
    return 0;
}