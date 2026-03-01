#include <iostream>
using namespace std;
class Car {
    string name;
    string color;
    public:
    Car(string name, string color) {
        this->name = name;
        this->color = color;
    }
    string getname(){
        return name;
    }
    string getColor(){
        return color;
    }
};
int main() {
    Car c1("Bularo", "Blue");
    Car c2(c1);
    cout << c2.getname() << "\n";
    cout << c2.getColor() << "\n";
}