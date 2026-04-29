#include<iostream>
using namespace std;

int STEP(int n) {
    if(n == 1){
        return 0;
    }

    // even
    if(n % 2 == 0) {
        return 1 + STEP(n / 2);
    } 
    else {  // odd
        return 1 + STEP(n - 1);
    }
}

int main() {
    int n = 10;
    cout << "NUMBER OF STEPS: " << STEP(n) << "\n";
    return 0;
}