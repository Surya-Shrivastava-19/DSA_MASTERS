#include <iostream>  // HIERARCHIAL INHERITANCE
using namespace std;
class Animal {
    public:
    void Eat(){
        cout << "Eating ..." << "\n";
    }
    void Breath(){
        cout << "Breathing ..." << "\n";
    }
};
class Bird : public Animal {
    public:
    void Fly(){
        cout << "Birds flying ..." << "\n";
    }
};
class Fish : public Animal {
    public:
    void Swims(){
        cout << "Swiming ..." << "\n";
    }
};
class Mammal : public Animal {
    public:
    void Walk(){
        cout << "Walking ..." << "\n";
    }
};
int main(){
    Mammal m1;
    m1.Eat();
    m1.Breath();
    m1.Walk();
    cout << "--///--" << "\n";
    Fish f1;
    f1.Eat();
    f1.Breath();
    f1.Swims();
    cout << "--///--" << "\n";
    Bird b1;
    b1.Eat();
    b1.Breath();
    b1.Fly();
    return 0;
}
