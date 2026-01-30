#include <iostream>
using namespace std;
void Clearithbit(int nums, int i){
    nums = (nums & ~(1 << i));
    cout << "ANS = " << nums;
}
int main(){
    int nums;
    cout << "Enter nums : ";
    cin >> nums;
    int i;
    cout << "Enter ith position : ";
    cin >> i;
    Clearithbit(nums, i);
}