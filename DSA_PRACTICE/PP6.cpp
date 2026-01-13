#include <iostream>
#include <string>
using namespace std;
class Car {
    string Name;
    string Color;
    public:
    Car(string Name, string Color){
        this->Name = Name;     // SETTER
        this->Color = Color; 
    }
    string getName(){  // YE PRIVATE MAI KARNA CHAIYA 
        return Name;
    } 
    string getColor(){   // GETTER
        return Color;
    }
    //CUSTOM COPY CONSTRUCTOR
    // Car(Car &original){
    //     cout << "COPY CONSTRUCTOR..." << "\n";
    //     Name = original.Name;
    //     Color = original.Color;
    // }
};
int main(){
    Car c1("BMW 1000000", "DARK BLUE");
    cout << c1.getName() << "\n";
    cout << c1.getColor() << "\n";
    Car c2(c1);
    cout << c2.getName() << "\n";
    cout << c2.getColor() << "\n";
    return 0;
}
