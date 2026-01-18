#include <iostream>
#include <string>
using namespace std;
class Car {
    string Name;
    string Color;
    public:
    Car(string Name, string Color){
        this->Name = Name;     
        this->Color = Color; 
    }
    string getName(){  
        return Name;
    } 
    string getColor(){   
        return Color;
    }

    Car(Car &original){
        cout << "COPY CONSTRUCTOR..." << "\n";
        Name = original.Name;
        Color = original.Color;
    }
};
int main(){
    Car c1("BMW 1 CRORE", "DARK BLUE");
    cout << c1.getName() << "\n";
    cout << c1.getColor() << "\n";
    Car c2(c1);
    cout << c2.Name << "\n";
    cout << c2.Color << "\n";
    return 0;
}
