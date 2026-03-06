#include <iostream>
using namespace std;
class Engine {
    public:
    void startEngine() {
        cout << "Engine Started" << "\n";
    }
};
class Car{
    private:
    Engine e1;
    public:
    void startCar() {
        e1.startEngine();
        cout << "Car Started" << "\n";
    }
};
int main() {
    Car c1;
    c1.startCar();
    return 0;
}