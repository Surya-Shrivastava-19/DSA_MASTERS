#include <iostream>
#include <string>
using namespace std;
class Car {
    string name;
    string color;
    
    public:
   
    Car() {  
        cout << "Constructor with non parameter...***\n";
    }
    Car(string name, string color) {   
        cout << "Constructor with parameter...***\n";
        this->name = name;  
        this->color = color;    
    }
    void start() {
        cout << "car has started...***";
    }
    void stop() {
        cout << "car has stopped...***";
    }

    string getValue(){
        return name;
    }
    string getColor(){
        return color;
    }
};
int main(){
    Car c0;  
    Car c1("FORTUNER NEW", "BLUE");  
    Car c2("BMW", "DARK GREY");
    cout << c1.getValue() << endl;
    cout << c1.getColor() << endl;
    cout << c2.getValue() << endl;
    cout << c2.getColor() << endl;
    return 0;
}
