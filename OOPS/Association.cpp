#include <iostream>
using namespace std;
class Passport {
    public:
    string passportNumber;
    Passport(string pN) {
        passportNumber = pN;
    }
};
class Person {
    public:
    string name;
    Passport *passport;
    Person(string n, Passport *p) {
        name = n;
        passport = p;
    }
    void display() {
        cout << "NAME : " << name << "\n";
        cout << "PASSPORT NUMBER : " << passport -> passportNumber << "\n";
    }
};
int main() {
    Passport p1("12CS345j3");
    Person p2("SURYA", &p1);
    p2.display();
    return 0;
}