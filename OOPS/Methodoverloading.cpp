#include <iostream>
using namespace std;
template<class T>
class Maths{
    public:
    // Area of a Triangle
    float Area(float half, T base, T height) {
        return (half*base*height);
    }
    // Area of a rectangle
    T Area(T length, T breadth){
        return (length*breadth);
    }
    // Area of a circle
    T Area(T r) {
        return (3.14*r*r);
    }
};
int main() {
    Maths<int> m1;
    int a;
    cout << "Enter your choice : " << "\n";
    cout << "For Area of a triangle press 1 : " << "\n";
    cout << "For Area of a rectangle press 2 : " << "\n";
    cout << "For Area of a circle press 3 : " << "\n";
    cin >> a;
    if(a == 1) {
        int base, height;
        cout << "Enter base of a triangle : ";
        cin >> base;
        cout << "Enter height of a triangle : ";
        cin >> height;
        cout << "Area of a triangle : " << m1.Area(0.5, base, height) << endl;
    }else if(a == 2) {
        int length, breadth;
        cout << "Enter length of a rectangle : ";
        cin >> length;
        cout << "Enter breadth of a rectangle : ";
        cin >> breadth;
        cout << "Area of a rectangle : " << m1.Area(length, breadth) << endl;
    }else if(a == 3) {
        int radius;
        cout << "Enter radius of a circle : ";
        cin >> radius;
        cout << "Area of a circle : " << m1.Area(radius) << endl;
    }else {
        cout << "||..You enter a Invalid choice..||" << "\n";
    }
    return 0;
}