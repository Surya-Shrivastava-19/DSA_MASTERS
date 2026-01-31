#include <iostream>
using namespace std;
void OddEven(int n){
    if((n & 1) == 0){    
        cout << "even" << "\n";
    }else{
        cout << "odd" << "\n";
    }
}
int main(){
    int n;
    cout << "enter value : ";
    cin >> n;
    OddEven(n);
}