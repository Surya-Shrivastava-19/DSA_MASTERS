// FRIEND FUNCTION
#include <iostream>
using namespace std;
class A {    // A KE PAAS B KI ACCESS NAHI AAYEGI PAR B KE PASS A KI ACCESS AJAYEGI
    string secret = "RADHE RADHE";
    friend class B;
    friend void revealSecret(A &obj);  // BECOME A FRIEND FUNCTION
};
class B {   // BECOMES A FRIEND CLASS OF A
    public:
    void showSecret(A &obj) {   // *****
        cout << obj.secret << "\n";  
    }  
};
void revealSecret(A &obj) {
        cout << obj.secret << "\n";
}
int main() {
    A a1;
    B b1;
    b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}
