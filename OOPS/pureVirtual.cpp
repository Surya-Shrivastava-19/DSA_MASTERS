#include <iostream>
using namespace std;
class Animal {
    public:
    virtual void eat() = 0; 
};
class Dog: public Animal {
    public:
    void eat() {
        cout << "Dog is eating." << "\n";
    }
};
class Cat: public Animal {
    public:
    void eat() {
        cout << "Cat is eating." << "\n";
    }
};
int main() {
    Dog d;
    d.eat();
    Cat c;
    c.eat();
    return 0;
}