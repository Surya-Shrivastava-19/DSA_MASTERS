#include <iostream>
using namespace std;
int main(){
    int arr[5] = {4, 5, 3, 4, 5};
    int XOR = 0;
    for(int i=0; i<5; i++){
         XOR = (arr[i]^XOR); 
    }
    cout << XOR << "\n";
}