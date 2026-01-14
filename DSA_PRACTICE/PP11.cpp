#include <iostream>
using namespace std;
class Fruits {
    public:
    void taste(){
        cout << "DELICIOUS..." << "\n";
    }
    void health(){
        cout << "HEALTHY..." << "\n";
    }
};
class Mangoes : public Fruits {
    public:
    string color = "Yellow & green";
    void Season(){
        cout << "found in summer season..." << "\n";
    }
};
class Kachcha_aam : public Mangoes {
    public:
    void Use(){
        cout << "Use for making acchar..." << "\n";
    }
    void Found(){
        cout << "Found in mangoes trees in summer season...";
    }
};
int main(){
    Kachcha_aam k1;
    cout << k1.color << "\n";
    k1.Use();
    k1.taste();
    k1.health();
    k1.Season();
    k1.Found();
    return 0;
}
