// SHALLO COPY CONSTRUCTOR
#include <iostream>
#include <string>
using namespace std;
class Car {
    public:
    int *milage;
    string name;
    string color;
    Car(string name, string color){
        this->name = name;
        this->color = color;
        milage = new int;
        *milage = 12;  // DYNAMIC ALLOCATION
    }
    // CUSTOM COPY CONSTRUCTOR
    Car(Car &original){
        cout << "COPY CONSTRUCTOR..." << "\n";
        name = original.name;
        color = original.color;
        milage = original.milage;
    }
};
int main(){
    Car c1("MARUTI SUJUKI", "WHITE");
    Car c2(c1);
    cout << c2.name << "\n";
    cout << c2.color << "\n";
    cout << *c2.milage << "\n";
    *c2.milage = 10;
    cout <<"change in c1 obj: milage = "<< *c1.milage << endl; // BECAUSE C1,C2 HEAP KE ANDAR SAME MEMORY LOCATION KO POINT KAR RAHE HAI
    return 0;
}
