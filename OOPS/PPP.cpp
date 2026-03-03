#include <iostream>
using namespace std;

class Demo {
public:
    static void show() {
        cout << "This is Static Method";
    }
};

int main() {
    Demo::show();   // Object ki zarurat nahi
    return 0;
}