#include <iostream>
using namespace std;
void ithposbit(int num, int i){
    if(!(num & (1 << i))) {
        cout << i << "th position bit in the " << num <<" is : " << 0;
    }else {
        cout << i << "th position bit in the " << num <<" is : " << 1;
    }
}
int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int i;
    cout << "Enter the position : ";
    cin >> i;
    ithposbit(num, i);
    return 0;
}