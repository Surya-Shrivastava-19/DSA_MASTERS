// MOORE'S VOTING ALGORITHM TO FIND A MAJORITY ELEMENT
#include <iostream>
#include <vector>
using namespace std;
int majorityelement(vector<int> nums, int n){
    int frequency=0, answer=0;
    for(int i=0; i<n; i++){
        if(frequency==0){
            answer=nums[i];
        }
        if(answer==nums[i]){
            frequency++;
        }else{
            frequency--;
        }
    }
    return answer;
}
int main(){
    int n;
    cout << "enter size of vector : ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter elements of a vector : ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int ans=majorityelement(nums, n);
    cout << "majority element is : " << ans;
    return 0;
}