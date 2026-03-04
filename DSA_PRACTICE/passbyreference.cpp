#include <iostream>
using namespace std;
fun(int &x) {
    x = x + 10;
    cout << "x = " << x << "\n";
}
int main() {
    int a = 10;
    fun(a);
    cout << "a = " << a;
    return 0;
}