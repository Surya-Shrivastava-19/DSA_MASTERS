// CALCULATION OF X^n BY RECURSION IN O(log n) TIME COMPLEXITY ... by Surya Shrivastava.
#include <iostream>
using namespace std;
int pow(int x, int n) {
    if(n == 0) {
        return 1;
    }
    int halfpow = pow(x, n/2);
    if(n % 2 != 0) {
        return x * halfpow * halfpow;
    }else {
        return halfpow * halfpow;
    }
}
int main() {
    cout << pow(3, 2) << endl;
    return 0;
}