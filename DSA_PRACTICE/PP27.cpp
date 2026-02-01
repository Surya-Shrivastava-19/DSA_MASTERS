#include <iostream>
using namespace std;
int main(){
    int arr[4] = {1, 2, 3, 4, 5};
    int XOR1 = 0;
    for(int i=0; i<5; i++){
        XOR1 = XOR1 ^ arr[i];
    }
    int XOR2 = 0;
    int arr1[4] = {1, 2, 4, 5};
    for(int j=0; j<4; j++){
        XOR2 = XOR2 ^ arr1[i];
    }
    int ans = XOR ^ XOR1;
    cout << "ANS = " << ans;
    return 0;
}