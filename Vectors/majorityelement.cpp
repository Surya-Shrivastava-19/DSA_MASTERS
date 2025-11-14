// BRUTE FORCE APPROACH TO FIND A MAJORITY ELEMENT
#include <iostream>
#include <vector>
using namespace std;
int majorityelement(vector<int> nums, int n){
    for(int value: nums){
        int count=0;
        for(int element: nums){
            if(value==element){
                count++;
            }
        }
        if(count > n/2){
            return value;
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "enter size of vector : ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter elements of vector : ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int ans=majorityelement(nums, n);
    cout << "majority element is : " << ans << endl;
    return 0;
}