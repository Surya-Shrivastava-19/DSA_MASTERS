#include<iostream>
using namespace std;

bool K(int arr[], int n, int k) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((arr[i] + arr[j]) == k) {
                return true;
            }
        }
    }
    return false; 
}

int main() {
    int n;
    cout << "ENTER SIZE OF ARRAY: ";
    cin >> n;

    int arr[n];
    cout << "ENTER ELEMENTS OF ARRAY: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "ENTER k ELEMENT: ";
    cin >> k;
    if(K(arr, n, k)) {
        cout << "ANS: " << "TRUE" << "\n";
    }else {
        cout << "ANS: " << "FALSE" << "\n";
    }
    return 0;
}