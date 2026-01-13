// DEEP COPY CONSTRUCTOR
#include <iostream>
using namespace std;
class Car {
    public:
    string color;
    string name;
    int *milage;
    Car(string name, string color){
        this->name = name;
        this->color = color;
        milage = new int;
        *milage = 12;
    }
    Car(Car &original){  // CUSTOM COPY CONSTRUCTOR
        name = original.name;
        color = original.color;
        milage = new int;
        *milage = *original.milage;
    }
};
int main(){
    Car c1("Tesla Luxury Electric Vehicles", "BLUE");
    Car c2(c1);
    cout << c2.name << "\n";
    cout << c2.color << "\n";
    cout << *c2.milage << "\n";
    cout << *c1.milage << "\n";
    *c2.milage = 10;
    cout << "c1 mai change nahi hoga :" <<  *c1.milage << "\n"; // BECAUSE DONO C1,C2 ALAG-ALAG MEMORY KO POINT KAR RAHE HAI
    cout << "c2 mai change hoga : " << *c2.milage << "\n"; 
    return 0;
}
