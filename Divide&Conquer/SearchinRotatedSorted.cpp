// DIVIDE & CONQUER (SEARCH IN ROTATED SORTED ARRAY) ....By Surya Shrivastava.
// TIME COMPLEXITY : O(logn)
#include <iostream>
#include <vector>
using namespace std;
int Searchin_RSA(vector<int> vec, int stidx, int endidx, int target) {
    // Base case 
    if (stidx > endidx) {
        cout << "ELEMENT NOT OCCURS IN THIS VECTOR" << "\n";
        return -1;
    }
    
    // int mid = (stidx + endidx) / 2;
    int mid = stidx + (endidx - stidx) / 2;

    if (vec[mid] == target) {
        return mid;
    }

    if (vec[stidx] <= vec[mid]) {
        // Mid lie in Line 1
        if (vec[stidx] <= target && target <= vec[mid]) {
            // Call left half
            return Searchin_RSA(vec, stidx, mid - 1, target);

        }else {
            // Call right half
            return Searchin_RSA(vec, mid + 1, endidx, target);

        }
    }else {
        // Mid lie in Line 2
        if (vec[mid] <= target && target <= vec[endidx]) {
            // Call right half
            return Searchin_RSA(vec, mid + 1, endidx, target);

        }else {
            // Call left half
            return Searchin_RSA(vec, stidx, mid - 1, target);

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
    int i = Searchin_RSA(vec, 0, n-1, target);
    cout <<"ELEMENT FOUND AT THE INDEX : " << i;
    return 0;
}