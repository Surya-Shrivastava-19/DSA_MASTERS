#include <iostream>
#include <string>
using namespace std;
class Car {
    string name;
    string color;
    
    public:
    // CONSTRUCTOR 
    Car(string nameValue, string colorValue) {
        cout << "Constructor is called at object creation...\n";
        name = nameValue;   // SETTER
        color = colorValue;    // SETTER
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
    Car c1("MARUTI SUJUKI", "BLUE");  // AUTOMATIC CALL KAREGA CONSTUCTOR KO
    cout << c1.getValue() << endl;
    cout << c1.getColor() << endl;
    return 0;
}
