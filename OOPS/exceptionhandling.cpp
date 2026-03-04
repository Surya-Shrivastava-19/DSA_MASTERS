#include <iostream>
using namespace std;
int main() {
    float x,y,z;
    float R;
    cout << "Enter three numbers x, y & z : ";
    cin >> x;
    cin >> y;
    cin >> z;
    try {
        if(x==y) {
            throw x;
        }else {
            R = z/(x-y);
            cout << "R == " << R;
        }
    }
    catch(float n) {
        cout << ".EXCEPTION CAUGHT X & Y ARE EQUAL." << "\n";
    }
    return 0;
}