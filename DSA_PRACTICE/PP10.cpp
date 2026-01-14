#include <iostream>
#include <string>
using namespace std;
class Animal {
    public:
    string name;
    string color;
    void eat() {
        cout << "Eating ..." << "\n";
    }
    void breeth() {
        cout << "Breething ... " << "\n";
    }
};
class Fish : public Animal {
    public:
    int fins = 3;
    void swim() {
        cout << "swims ..." << "\n";
    }
};
int main(){
    Fish f1;
    cout << "fins = " << f1.fins << "\n";
    f1.swim();
    cout << "--<>--" << "\n";
    f1.eat();
    f1.breeth();
    return 0;
}
