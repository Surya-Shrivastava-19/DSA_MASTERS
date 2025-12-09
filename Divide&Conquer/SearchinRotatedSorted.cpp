#include <iostream>
using namespace std;
int Searchin_RSA(vector<int> vec, int stidx, int endidx, int target) {
    // int mid = (stidx + endidx) / 2;
    int mid = stidx + (endidx - stidx) / 2;
    if (vec[mid] == target) {
        return mid;
    }
    if (vec[stidx] <= vec[mid]) {
        // Mid lie in Line 1
        if (vec[stidx] <= target && target <= vec[mid]) {
            // Call left half
            Searchin_RSA(vec, stidx, mid - 1, target);
        }else {
            // Call right half
            Searchin_RSA(vec, mid + 1, endidx, target);
        }
    }else {
        // Mid lie in Line 2
        if (vec[mid] <= target && target <= vec[endidx]) {
            
        }
    }
}
int main() {
    int n;
    cout << "ENTER SIZE OF A VECTOR : ";
    cin >> n;
    vector<int> vec(n);
    cout << "ENTER ELEMENTS OF A VECTOR : ";
    for (int i = 0; i < n; i ++) {
        cin >> vec[i];
    }
    int target;
    cout << "ENTER TARGETED ELEMENT : ";
    cin >> target;
    Searchin_RSA(vec, 0, n-1, target);
    return 0;
}