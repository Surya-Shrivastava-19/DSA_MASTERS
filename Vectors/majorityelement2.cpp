// OPTIMIZE APPROACH TO FIND A MAJORITY ELEMENT
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorityelement(vector<int> nums, int n){
    int frequency=1, ans=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            frequency++;
        }else{
            frequency=1;
            ans=nums[i];
        }
        if(frequency>n/2){
            return ans;
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "enter size of a vector : ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter elements of a vector : ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int ans=majorityelement(nums, n);
    cout << "majority element is : " << ans << endl;
    return 0;
}