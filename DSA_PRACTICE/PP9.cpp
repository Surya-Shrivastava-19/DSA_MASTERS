#include <iostream>
using namespace std;
class Car {
    public:
    string name;
    string color;
    int *milage;
    Car(string name, string color){
        this->name = name;
        this->color = color;
        milage = new int;
        *milage = 12;
    }
    Car(Car &original){
        name = original.name;
        color = original.color;
        milage = new int;
        *milage = *original.milage;
    }
    ~Car(){
        cout << "DESTRUCTOR..." << "\n";
        if(milage != NULL){
            delete milage;
            milage = NULL;
        }
    }
};
int main(){
    Car c1("'BMW NEW MODLE'", "BLUE");
    Car c2(c1);
    cout << c2.name << "\n";
    cout << c2.color << "\n";
    cout << *c2.milage << "\n";
    *c2.milage = 10;
    cout << *c1.milage << "\n";
    return 0;
}
