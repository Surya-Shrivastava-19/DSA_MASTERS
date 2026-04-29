#include<iostream>
using namespace std;

void Sum(int arr[], int key) {
    int count = 0;
    for(int i = 0; i < 6; i++) {
        for(int j = i + 1; j < 6; j++) {
            if(arr[i] + arr[j] == key) {
                count++;
                cout << arr[i] << ", " << arr[j] << "\n";
            }
        }
    }
    cout << "count: " << count << "\n";
}

int main() {
    int arr[6] = {0,1,2,3,4,5};
    int key = 6;
    Sum(arr, key);
    return 0;
}