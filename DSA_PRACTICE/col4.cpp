#include<iostream>
using namespace std;
int maxSum(int arr[]) {
    int Max = 0;
    for(int i=0;i<5;i++) {
        for(int j=i+1;j<5;j++) {
            Max = max(Max, (arr[i]+arr[j]));
        }
    }
    return Max;
}
int main() {
    int n;
    int arr[5] = {1,2,3,4,5};
    cout << "MAX: " << maxSum(arr) << "\n";
    return 0;
}