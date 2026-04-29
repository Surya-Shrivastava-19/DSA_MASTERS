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
    cout << "ENTER SIZE OF ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "ENTER ELEMENTS OF ARRAY: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "MAX: " << maxSum(arr) << "\n";
    return 0;
}