#include <iostream>
using namespace std;
class A {
    private:
    string secreat = "JAI SHREE RADHE";
    public:
    friend void revealSecreat(A &obj);
    friend class B;
};
class B {
    public:
    void showSecreat(A &obj) {
        cout << obj.secreat << "\n";
    }
};
void revealSecreat(A &obj) {
    cout << obj.secreat << "\n";
}
int main() {
    A a1;
    revealSecreat(a1);
    B b1;
    b1.showSecreat(a1);
    return 0;
}