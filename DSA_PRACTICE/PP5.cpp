#include <iostream>
#include <string>
using namespace std;
class Car {
    string name;
    string color;
    
    public:
    // CONSTRUCTOR 
    Car() {   // NON-PARAMETERISED CONSTRUCTOR
        cout << "Constructor with non parameter...\n";
    }
    Car(string name, string color) {   // PARAMETERISED CONSTRUCTOR
        cout << "Constructor with parameter...\n";
        this->name = name;   // SETTER
        this->color = color;    // SETTER
    }
    void start() {
        cout << "car has started...";
    }
    void stop() {
        cout << "car has stopped...";
    }
    // GETTER
    string getValue(){
        return name;
    }
    string getColor(){
        return color;
    }
};
int main(){
    Car c0;  // NON-PARAMETERISED CONSTRUCTOR CALL
    Car c1("MARUTI SUJUKI", "BLUE");  // AUTOMATIC CALL KAREGA PARAMETERISED CONSTUCTOR KO
    Car c2("FORTUNER", "WHITE");
    cout << c1.getValue() << endl;
    cout << c1.getColor() << endl;
    cout << c2.getValue() << endl;
    cout << c2.getColor() << endl;
    return 0;
}
