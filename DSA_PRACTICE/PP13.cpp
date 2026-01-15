// SINGLE INHERITANCE 
#include <iostream>
using namespace std;
class Animal {
    public:
    string color;
    void eat(){
        cout << "Eating..." << "\n";
    }
    void breath(){
        cout << "Breathing..." << "\n";
    }
};
class Fish : public Animal {
    public:
    int fins;
    void swim(){
        cout << "Swims..." << "\n";
    }
};
int main(){
    Fish f1;
    f1.fins=3;
    cout << f1.fins << "\n";
    f1.swim();
    f1.eat();
    f1.breath();
}